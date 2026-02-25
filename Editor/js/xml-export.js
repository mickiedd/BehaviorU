// xml-export.js — Serialize graph to behaviac-compatible XML

function exportToXML(graph) {
  const treeName = graph.treeName || 'BT_Unnamed';
  const nodes    = graph.nodes;
  const edges    = graph.edges;

  // Build parent→children map (regular edges only, attachments separate)
  const childMap = {};      // nodeId → [childId, ...]  (ordered by x position)
  const attachMap = {};     // nodeId → [attachId, ...]
  const parentOf = {};      // nodeId → parentId

  for (const n of nodes) { childMap[n.id] = []; attachMap[n.id] = []; }

  for (const e of edges) {
    const child = nodes.find(n => n.id === e.to);
    if (!child) continue;
    if (isAttachment(child.type)) {
      if (!attachMap[e.from]) attachMap[e.from] = [];
      attachMap[e.from].push(e.to);
    } else {
      if (!childMap[e.from]) childMap[e.from] = [];
      childMap[e.from].push(e.to);
      parentOf[e.to] = e.from;
    }
  }

  // Sort children by x position (left-to-right = execution order)
  const nodeById = Object.fromEntries(nodes.map(n => [n.id, n]));
  for (const id in childMap) {
    childMap[id].sort((a, b) => (nodeById[a]?.x || 0) - (nodeById[b]?.x || 0));
  }

  // Find root
  const rootNode = nodes.find(n => n.type === 'Root') ||
                   nodes.find(n => !parentOf[n.id] && !isAttachment(n.type));

  if (!nodes.length) return `<behavior name="${escXML(treeName)}" agenttype="BTAgent" version="5">\n</behavior>`;

  let lines = [];
  lines.push(`<behavior name="${escXML(treeName)}" agenttype="BTAgent" version="5">`);

  function writeNode(nid, indent) {
    const n = nodeById[nid];
    if (!n) return;
    const pad = '  '.repeat(indent);

    // Open tag with properties
    const props = buildProps(n);
    const atts  = attachMap[nid] || [];
    const kids  = childMap[nid]  || [];
    const hasContent = props.length || atts.length || kids.length;

    if (!hasContent) {
      lines.push(`${pad}<node id="${n.id}" class="${n.type}"/>`);
    } else {
      lines.push(`${pad}<node id="${n.id}" class="${n.type}">`);
      // properties
      for (const p of props) {
        lines.push(`${pad}  <property ${escXML(p.key)}="${escXML(p.value)}"/>`);
      }
      // attachments
      for (const aid of atts) {
        const an = nodeById[aid];
        if (!an) continue;
        const ap = buildProps(an);
        if (!ap.length) {
          lines.push(`${pad}  <attachment id="${an.id}" class="${an.type}"/>`);
        } else {
          lines.push(`${pad}  <attachment id="${an.id}" class="${an.type}">`);
          for (const p of ap) {
            lines.push(`${pad}    <property ${escXML(p.key)}="${escXML(p.value)}"/>`);
          }
          lines.push(`${pad}  </attachment>`);
        }
      }
      // children (recursive)
      for (const kid of kids) writeNode(kid, indent + 1);
      lines.push(`${pad}</node>`);
    }
  }

  if (rootNode) {
    // root's children are top-level nodes
    const topKids = childMap[rootNode.id] || [];
    if (topKids.length === 0) {
      lines.push(`  <node id="${rootNode.id}" class="Root"/>`);
    } else {
      lines.push(`  <node id="${rootNode.id}" class="Root">`);
      for (const kid of topKids) writeNode(kid, 2);
      lines.push(`  </node>`);
    }
  } else {
    // No Root node — just dump top-level nodes
    const topLevel = nodes.filter(n => !parentOf[n.id] && !isAttachment(n.type));
    for (const n of topLevel) writeNode(n.id, 1);
  }

  lines.push('</behavior>');
  return lines.join('\n');
}

function buildProps(n) {
  const schema = getNodeProps(n.type);
  const result = [];
  // schema-defined props
  for (const s of schema) {
    const val = (n.props && n.props[s.key] !== undefined) ? n.props[s.key] : s.default;
    if (val !== '' && val !== undefined && val !== null) {
      result.push({ key: s.key, value: String(val) });
    }
  }
  // extra custom props (key/value pairs not in schema)
  if (n.extraProps) {
    for (const [k, v] of Object.entries(n.extraProps)) {
      if (k && v !== '') result.push({ key: k, value: String(v) });
    }
  }
  return result;
}

function escXML(s) {
  return String(s ?? '').replace(/&/g,'&amp;').replace(/</g,'&lt;').replace(/>/g,'&gt;').replace(/"/g,'&quot;');
}
