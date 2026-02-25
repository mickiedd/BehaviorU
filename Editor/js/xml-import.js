// xml-import.js — Parse behaviac XML into graph nodes/edges
// Supports both formats:
//   <property name="Key" value="Val"/>   ← plugin format (BT_SimpleNPC.xml style)
//   <property Key="Val"/>                ← legacy attribute-per-key format

function importFromXML(xmlStr, graph) {
  let doc;
  try {
    doc = new DOMParser().parseFromString(xmlStr, 'application/xml');
  } catch(e) { alert('XML parse error: ' + e.message); return; }
  const errNode = doc.querySelector('parsererror');
  if (errNode) { alert('Invalid XML:\n' + errNode.textContent.slice(0,300)); return; }

  const behavior = doc.querySelector('behavior');
  if (!behavior) { alert('No <behavior> element found.'); return; }

  graph.treeName = behavior.getAttribute('name') || 'Imported';
  graph.nodes = [];
  graph.edges = [];

  let idCounter = 1;
  const usedIds = new Set();

  function allocId(attrId) {
    const n = parseInt(attrId, 10);
    if (!isNaN(n) && !usedIds.has(n)) { usedIds.add(n); return n; }
    while (usedIds.has(idCounter)) idCounter++;
    usedIds.add(idCounter);
    return idCounter++;
  }

  /** Read a <property> element → {key, value} normalizing both formats + legacy key names */
  function readProps(el) {
    const props = {};
    for (const propEl of el.children) {
      if (propEl.tagName !== 'property') continue;

      const nameAttr  = propEl.getAttribute('name');
      const valueAttr = propEl.getAttribute('value');

      if (nameAttr !== null) {
        // Standard format: <property name="Key" value="Val"/>
        props[normKey(nameAttr)] = valueAttr ?? '';
      } else {
        // Legacy attribute format: <property Key="Val"/>
        for (let i = 0; i < propEl.attributes.length; i++) {
          const a = propEl.attributes[i];
          props[normKey(a.name)] = a.value;
        }
      }
    }
    return props;
  }

  /** Normalize legacy key names to plugin-standard keys */
  function normKey(k) {
    const map = {
      // BT_SimpleNPC.xml uses these; plugin C++ reads the right-hand values
      'LeftOperand':  'Opl',
      'RightOperand': 'Opr',
      'MethodName':   'Method',
      'ResultFuncName': 'ResultOption',
      // operator string synonyms
    };
    return map[k] || k;
  }

  function parseNode(el, depth, sibIdx, parentId) {
    const rawId   = el.getAttribute('id');
    const rawType = el.getAttribute('class') || el.tagName;
    const id   = allocId(rawId);
    // Normalise class: "behaviac::Selector" → "Selector"
    const type = rawType.split(':').pop();

    const props = readProps(el);

    // Position — BFS will reorder via autoLayout at the end
    const x = sibIdx * 200 + 60;
    const y = depth  * 130 + 60;

    const node = { id, type, label: type, props, x, y, w: 180, h: 72, extraProps:{} };
    graph.nodes.push(node);
    if (parentId !== null) graph.edges.push({ from: parentId, to: id });

    // Children
    let childIdx = 0;
    for (const child of el.children) {
      if (child.tagName === 'node') {
        parseNode(child, depth + 1, childIdx++, id);
      } else if (child.tagName === 'attachment') {
        parseAttachment(child, id);
      }
    }
  }

  function parseAttachment(el, parentId) {
    const rawId   = el.getAttribute('id');
    const rawType = el.getAttribute('class') || 'Precondition';
    const id   = allocId(rawId);
    const type = rawType.split(':').pop();
    const props = readProps(el);

    const parentNode = graph.nodes.find(n => n.id === parentId);
    const x = (parentNode?.x || 0) + 200;
    const y = (parentNode?.y || 0);

    graph.nodes.push({ id, type, label: type, props, x, y, w: 180, h: 72, extraProps:{} });
    graph.edges.push({ from: parentId, to: id });
  }

  // Find & process top-level nodes
  let sibIdx = 0;
  for (const child of behavior.children) {
    if (child.tagName === 'node') parseNode(child, 0, sibIdx++, null);
  }

  // Re-layout for a clean visual
  autoLayout(graph);
}

function autoLayout(graph) {
  if (!graph.nodes.length) return;

  const childMap = {};
  const parentOf = {};
  for (const n of graph.nodes) childMap[n.id] = [];
  for (const e of graph.edges) {
    const child = graph.nodes.find(n => n.id === e.to);
    if (child && !isAttachment(child.type)) {
      childMap[e.from].push(e.to);
      parentOf[e.to] = e.from;
    }
  }

  const nodeById = Object.fromEntries(graph.nodes.map(n => [n.id, n]));
  const roots    = graph.nodes.filter(n => !parentOf[n.id] && !isAttachment(n.type));
  const DX = 200, DY = 130;

  function subW(id) {
    const kids = childMap[id] || [];
    return kids.length ? kids.reduce((s,k) => s + subW(k), 0) : DX;
  }

  function place(id, cx, y) {
    const n = nodeById[id];
    if (!n) return;
    const kids = childMap[id] || [];
    n.y = y;
    if (!kids.length) { n.x = cx - 90; return; }
    let startX = cx - subW(id) / 2;
    for (const kid of kids) {
      place(kid, startX + subW(kid) / 2, y + DY);
      startX += subW(kid);
    }
    n.x = cx - 90;
    // Reposition attachment nodes beside their parent
    const atts = graph.edges
      .filter(e => e.from === id)
      .map(e => graph.nodes.find(nn => nn.id === e.to))
      .filter(nn => nn && isAttachment(nn.type));
    atts.forEach((an, i) => { an.x = n.x + 195; an.y = n.y + i * 80; });
  }

  let sx = 400;
  for (const r of roots) {
    place(r.id, sx + subW(r.id) / 2, 60);
    sx += subW(r.id) + DX;
  }
}
