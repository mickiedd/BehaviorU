// xml-import.js — Parse behaviac XML into graph nodes/edges

function importFromXML(xmlStr, graph) {
  let doc;
  try {
    doc = new DOMParser().parseFromString(xmlStr, 'application/xml');
  } catch(e) { alert('XML parse error: ' + e.message); return; }
  const errNode = doc.querySelector('parsererror');
  if (errNode) { alert('Invalid XML:\n' + errNode.textContent.slice(0,200)); return; }

  const behavior = doc.querySelector('behavior');
  if (!behavior) { alert('No <behavior> element found.'); return; }

  graph.treeName = behavior.getAttribute('name') || 'Imported';
  graph.nodes = [];
  graph.edges = [];

  let idCounter = 1;
  const usedIds = new Set();

  function allocId(attrId) {
    let n = parseInt(attrId, 10);
    if (!isNaN(n) && !usedIds.has(n)) { usedIds.add(n); return n; }
    while (usedIds.has(idCounter)) idCounter++;
    usedIds.add(idCounter);
    return idCounter++;
  }

  // Layout helpers — simple top-down BFS layout
  const layoutSpacingX = 190;
  const layoutSpacingY = 100;

  function parseNode(el, depth, sibIdx, parentId) {
    const rawId   = el.getAttribute('id');
    const rawType = el.getAttribute('class') || 'Action';
    const id   = allocId(rawId);
    const type = rawType.charAt(0).toUpperCase() + rawType.slice(1);

    // Read properties
    const props = {};
    for (const propEl of el.querySelectorAll(':scope > property')) {
      const attrs = propEl.attributes;
      for (let i = 0; i < attrs.length; i++) {
        props[attrs[i].name] = attrs[i].value;
      }
    }

    // position
    const x = sibIdx * layoutSpacingX + 40;
    const y = depth * layoutSpacingY + 60;

    const node = { id, type, label: type, props, x, y, w: 160, h: 60, extraProps: {} };
    graph.nodes.push(node);

    if (parentId !== null) {
      graph.edges.push({ from: parentId, to: id });
    }

    // children
    let childIdx = 0;
    for (const child of el.children) {
      if (child.tagName === 'node') {
        parseNode(child, depth + 1, childIdx++, id);
      } else if (child.tagName === 'attachment') {
        parseAttachment(child, depth + 1, id);
      }
    }
  }

  function parseAttachment(el, depth, parentId) {
    const rawId   = el.getAttribute('id');
    const rawType = el.getAttribute('class') || 'Precondition';
    const id   = allocId(rawId);
    const type = rawType.charAt(0).toUpperCase() + rawType.slice(1);

    const props = {};
    for (const propEl of el.querySelectorAll(':scope > property')) {
      const attrs = propEl.attributes;
      for (let i = 0; i < attrs.length; i++) {
        props[attrs[i].name] = attrs[i].value;
      }
    }

    const parentNode = graph.nodes.find(n => n.id === parentId);
    const x = (parentNode?.x || 0) + 180;
    const y = (parentNode?.y || 0) - 10;

    graph.nodes.push({ id, type, label: type, props, x, y, w: 160, h: 60, extraProps: {} });
    graph.edges.push({ from: parentId, to: id });
  }

  // process top-level nodes under <behavior>
  let rootEl = null;
  let sibIdx = 0;
  for (const child of behavior.children) {
    if (child.tagName === 'node') {
      if (child.getAttribute('class') === 'Root') {
        rootEl = child;
      }
    }
  }

  if (rootEl) {
    parseNode(rootEl, 0, 0, null);
  } else {
    for (const child of behavior.children) {
      if (child.tagName === 'node') parseNode(child, 0, sibIdx++, null);
    }
  }

  // Re-layout using BFS for cleaner positioning
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

  const roots = graph.nodes.filter(n => !parentOf[n.id] && !isAttachment(n.type));
  const nodeById = Object.fromEntries(graph.nodes.map(n => [n.id, n]));
  const DX = 180, DY = 100;

  function subtreeWidth(id) {
    const kids = childMap[id] || [];
    if (!kids.length) return DX;
    return kids.reduce((s, k) => s + subtreeWidth(k), 0);
  }

  function place(id, x, y) {
    const n = nodeById[id];
    if (!n) return;
    const kids = childMap[id] || [];
    n.x = x; n.y = y;
    const totalW = kids.reduce((s, k) => s + subtreeWidth(k), 0);
    let cx = x - totalW / 2 + subtreeWidth(kids[0] || id) / 2;
    for (const kid of kids) {
      const w = subtreeWidth(kid);
      place(kid, cx, y + DY);
      cx += w;
    }
    // reposition attachments next to their node
    const atts = graph.edges
      .filter(e => e.from === id)
      .map(e => graph.nodes.find(nn => nn.id === e.to))
      .filter(nn => nn && isAttachment(nn.type));
    atts.forEach((an, i) => { an.x = n.x + 180; an.y = n.y + i * 70; });
  }

  let startX = 400;
  for (const r of roots) {
    place(r.id, startX, 60);
    startX += subtreeWidth(r.id) + DX;
  }
}
