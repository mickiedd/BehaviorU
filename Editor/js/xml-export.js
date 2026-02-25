// xml-export.js — Serialize graph to behaviac-compatible XML
// Wire format: <property name="Key" value="Val"/>  (matches plugin's ParseNodeFromXML)

function exportToXML(graph) {
  const treeName = graph.treeName || 'BT_Unnamed';
  const nodes    = graph.nodes;
  const edges    = graph.edges;

  // Build maps
  const childMap  = {};   // nodeId → [childId…] sorted by x
  const attachMap = {};   // nodeId → [attachId…]
  const parentOf  = {};   // nodeId → parentId

  for (const n of nodes) { childMap[n.id] = []; attachMap[n.id] = []; }

  for (const e of edges) {
    const child = nodes.find(n => n.id === e.to);
    if (!child) continue;
    if (isAttachment(child.type)) {
      (attachMap[e.from] = attachMap[e.from] || []).push(e.to);
    } else {
      (childMap[e.from]  = childMap[e.from]  || []).push(e.to);
      parentOf[e.to] = e.from;
    }
  }

  // Sort children left-to-right (execution order)
  const nodeById = Object.fromEntries(nodes.map(n => [n.id, n]));
  for (const id in childMap) {
    childMap[id].sort((a, b) => (nodeById[a]?.x || 0) - (nodeById[b]?.x || 0));
  }

  const rootNode = nodes.find(n => n.type === 'Root') ||
                   nodes.find(n => !parentOf[n.id] && !isAttachment(n.type));

  if (!nodes.length) {
    return `<?xml version="1.0" encoding="utf-8"?>\n<behavior name="${escXML(treeName)}" agenttype="BTAgent" version="5">\n</behavior>`;
  }

  const lines = [];
  lines.push(`<?xml version="1.0" encoding="utf-8"?>`);
  lines.push(`<behavior name="${escXML(treeName)}" agenttype="BTAgent" version="5">`);

  function writeNode(nid, indent) {
    const n = nodeById[nid];
    if (!n) return;
    const pad  = '  '.repeat(indent);
    const props = buildProps(n);
    const atts  = attachMap[nid] || [];
    const kids  = childMap[nid]  || [];
    const hasContent = props.length || atts.length || kids.length;

    if (!hasContent) {
      lines.push(`${pad}<node class="${n.type}" id="${n.id}"/>`);
    } else {
      lines.push(`${pad}<node class="${n.type}" id="${n.id}">`);
      for (const p of props) {
        lines.push(`${pad}  <property name="${escXML(p.key)}" value="${escXML(p.value)}"/>`);
      }
      for (const aid of atts) {
        const an = nodeById[aid];
        if (!an) continue;
        const ap = buildProps(an);
        if (!ap.length) {
          lines.push(`${pad}  <attachment class="${an.type}" id="${an.id}"/>`);
        } else {
          lines.push(`${pad}  <attachment class="${an.type}" id="${an.id}">`);
          for (const p of ap) {
            lines.push(`${pad}    <property name="${escXML(p.key)}" value="${escXML(p.value)}"/>`);
          }
          lines.push(`${pad}  </attachment>`);
        }
      }
      for (const kid of kids) writeNode(kid, indent + 1);
      lines.push(`${pad}</node>`);
    }
  }

  if (rootNode) {
    const topKids = childMap[rootNode.id] || [];
    if (!topKids.length) {
      lines.push(`  <node class="Root" id="${rootNode.id}"/>`);
    } else {
      lines.push(`  <node class="Root" id="${rootNode.id}">`);
      for (const kid of topKids) writeNode(kid, 2);
      lines.push(`  </node>`);
    }
  } else {
    const topLevel = nodes.filter(n => !parentOf[n.id] && !isAttachment(n.type));
    for (const n of topLevel) writeNode(n.id, 1);
  }

  lines.push('</behavior>');
  return lines.join('\n');
}

function buildProps(n) {
  const schema = getNodeProps(n.type);
  const result = [];

  // Always write the display label as "Name" if it differs from the type
  if (n.label && n.label !== n.type) {
    result.push({ key: 'Name', value: n.label });
  }

  // schema-defined props
  for (const s of schema) {
    const val = (n.props && n.props[s.key] !== undefined) ? n.props[s.key] : s.default;
    if (val !== '' && val !== undefined && val !== null) {
      if (s.type === 'bool' && val === false && s.default === false) continue;
      result.push({ key: s.key, value: s.type === 'bool' ? (val ? 'true' : 'false') : String(val) });
    }
  }
  // extra custom props
  if (n.extraProps) {
    for (const [k, v] of Object.entries(n.extraProps)) {
      if (k && k !== '__warning' && v !== '') result.push({ key: k, value: String(v) });
    }
  }
  return result;
}

function escXML(s) {
  return String(s ?? '').replace(/&/g,'&amp;').replace(/</g,'&lt;').replace(/>/g,'&gt;').replace(/"/g,'&quot;');
}
