// graph.js — Canvas rendering, pan/zoom, hit-testing, node/edge drawing

const NODE_W = 160;
const NODE_H = 60;
const PORT_R = 6;
const HEADER_H = 22;

class GraphRenderer {
  constructor(canvas, getGraph) {
    this.canvas   = canvas;
    this.ctx      = canvas.getContext('2d');
    this.getGraph = getGraph;  // () => current graph object
    this.camera   = { x: 0, y: 0, zoom: 1.0 };
    this._raf     = null;
    this._dirty   = true;
    this._scheduleRender();
  }

  markDirty() { this._dirty = true; }

  _scheduleRender() {
    this._raf = requestAnimationFrame(() => {
      if (this._dirty) { this._render(); this._dirty = false; }
      this._scheduleRender();
    });
  }

  resize(w, h) {
    this.canvas.width  = w * devicePixelRatio;
    this.canvas.height = h * devicePixelRatio;
    this.canvas.style.width  = w + 'px';
    this.canvas.style.height = h + 'px';
    this.ctx.scale(devicePixelRatio, devicePixelRatio);
    this._render();
  }

  // world ↔ screen transforms
  toScreen(wx, wy) {
    return {
      x: (wx + this.camera.x) * this.camera.zoom,
      y: (wy + this.camera.y) * this.camera.zoom
    };
  }
  toWorld(sx, sy) {
    return {
      x: sx / this.camera.zoom - this.camera.x,
      y: sy / this.camera.zoom - this.camera.y
    };
  }

  fitAll(nodes, wrapW, wrapH) {
    if (!nodes.length) return;
    let minX=Infinity,minY=Infinity,maxX=-Infinity,maxY=-Infinity;
    for (const n of nodes) {
      minX = Math.min(minX, n.x); minY = Math.min(minY, n.y);
      maxX = Math.max(maxX, n.x + NODE_W); maxY = Math.max(maxY, n.y + NODE_H);
    }
    const pad = 60;
    const scaleX = (wrapW - pad*2) / (maxX - minX || 1);
    const scaleY = (wrapH - pad*2) / (maxY - minY || 1);
    this.camera.zoom = Math.max(0.2, Math.min(1.5, Math.min(scaleX, scaleY)));
    this.camera.x = -minX + pad / this.camera.zoom;
    this.camera.y = -minY + pad / this.camera.zoom;
    this.markDirty();
  }

  _render() {
    const ctx = this.ctx;
    const W   = this.canvas.width  / devicePixelRatio;
    const H   = this.canvas.height / devicePixelRatio;
    const g   = this.getGraph();

    ctx.save();
    ctx.clearRect(0, 0, W, H);

    // background grid
    this._drawGrid(ctx, W, H);

    ctx.save();
    ctx.scale(this.camera.zoom, this.camera.zoom);
    ctx.translate(this.camera.x, this.camera.y);

    // edges first
    for (const e of g.edges) {
      this._drawEdge(ctx, e, g.nodes, g.selectedEdge);
    }
    // drag-preview edge
    if (g.dragEdge) this._drawDragEdge(ctx, g.dragEdge, g.nodes);

    // nodes
    for (const n of g.nodes) {
      this._drawNode(ctx, n, g.selectedIds);
    }

    ctx.restore();
    ctx.restore();
  }

  _drawGrid(ctx, W, H) {
    const z    = this.camera.zoom;
    const step = 20 * Math.max(1, Math.round(1/z));
    const offX = ((this.camera.x * z) % (step * z) + step * z) % (step * z);
    const offY = ((this.camera.y * z) % (step * z) + step * z) % (step * z);
    ctx.strokeStyle = '#2a2a2a';
    ctx.lineWidth   = 1;
    ctx.beginPath();
    for (let x = offX; x < W; x += step * z) { ctx.moveTo(x, 0); ctx.lineTo(x, H); }
    for (let y = offY; y < H; y += step * z) { ctx.moveTo(0, y); ctx.lineTo(W, y); }
    ctx.stroke();
  }

  _drawNode(ctx, n, selectedIds) {
    const info   = NODE_TYPE_MAP[n.type] || { category: 'composite', label: n.type };
    const col    = getCatColor(info.category);
    const sel    = selectedIds && selectedIds.has(n.id);
    const w = n.w || NODE_W, h = n.h || NODE_H;

    // shadow
    if (sel) {
      ctx.shadowColor = col.header;
      ctx.shadowBlur  = 12;
    }

    // body
    ctx.fillStyle = col.bg;
    this._roundRect(ctx, n.x, n.y, w, h, 6);
    ctx.fill();

    ctx.shadowBlur  = 0;
    ctx.shadowColor = 'transparent';

    // header
    ctx.fillStyle = col.header;
    this._roundRect(ctx, n.x, n.y, w, HEADER_H, [6, 6, 0, 0]);
    ctx.fill();

    // border
    ctx.strokeStyle = sel ? '#fff' : col.header;
    ctx.lineWidth   = sel ? 2 : 1;
    this._roundRect(ctx, n.x, n.y, w, h, 6);
    ctx.stroke();

    // type label in header
    ctx.fillStyle  = '#fff';
    ctx.font       = 'bold 10px Segoe UI, system-ui, sans-serif';
    ctx.textAlign  = 'center';
    ctx.textBaseline = 'middle';
    ctx.fillText(n.type, n.x + w/2, n.y + HEADER_H/2);

    // display name / subtitle
    const subtitle = n.label && n.label !== n.type ? n.label : this._getSubtitle(n);
    if (subtitle) {
      ctx.fillStyle  = '#aaa';
      ctx.font       = '10px Segoe UI, system-ui, sans-serif';
      ctx.textAlign  = 'center';
      ctx.textBaseline = 'middle';
      const maxW = w - 12;
      const text = this._truncate(ctx, subtitle, maxW);
      ctx.fillText(text, n.x + w/2, n.y + HEADER_H + (h - HEADER_H)/2);
    }

    // ports
    if (!isAttachment(n.type)) {
      // top port (input)
      this._drawPort(ctx, n.x + w/2, n.y, col.port, 'in', false);
      // bottom port (output / children)
      if (canHaveChildren(n.type)) {
        this._drawPort(ctx, n.x + w/2, n.y + h, col.port, 'out', false);
      }
    } else {
      // attachments: left port only
      this._drawPort(ctx, n.x, n.y + h/2, col.port, 'in', false);
    }
  }

  _getSubtitle(n) {
    if (!n.props) return '';
    const p = n.props;
    if (p.MethodName)     return p.MethodName;
    if (p.Signal)         return '⏳ ' + p.Signal;
    if (p.Message)        return '📋 ' + p.Message;
    if (p.EventName)      return '⚡ ' + p.EventName;
    if (p.Time)           return '⏱ ' + p.Time + 's';
    if (p.Frames)         return '🎞 ' + p.Frames + 'f';
    if (p.Count)          return '× ' + p.Count;
    if (p.Opl && p.Operator && p.Opr) return `${p.Opl} ${opLabel(p.Operator)} ${p.Opr}`;
    if (p.Opl && p.Opr)               return `${p.Opl} ← ${p.Opr}`;
    if (p.ReferencedTreePath)          return '→ ' + p.ReferencedTreePath;
    if (p.Weight)         return 'w=' + p.Weight;
    return '';
  }

  _drawPort(ctx, x, y, color, _type, hovered) {
    ctx.beginPath();
    ctx.arc(x, y, PORT_R, 0, Math.PI * 2);
    ctx.fillStyle   = hovered ? '#fff' : '#1e1e1e';
    ctx.strokeStyle = color;
    ctx.lineWidth   = 2;
    ctx.fill();
    ctx.stroke();
  }

  _drawEdge(ctx, e, nodes, selectedEdge) {
    const fromNode = nodes.find(n => n.id === e.from);
    const toNode   = nodes.find(n => n.id === e.to);
    if (!fromNode || !toNode) return;

    let sx, sy, tx, ty;
    if (isAttachment(toNode.type)) {
      // attachment edge: from right side of parent → left side of attachment
      sx = fromNode.x + (fromNode.w || NODE_W);
      sy = fromNode.y + (fromNode.h || NODE_H) / 2;
      tx = toNode.x;
      ty = toNode.y + (toNode.h || NODE_H) / 2;
    } else {
      sx = fromNode.x + (fromNode.w || NODE_W) / 2;
      sy = fromNode.y + (fromNode.h || NODE_H);
      tx = toNode.x   + (toNode.w  || NODE_W) / 2;
      ty = toNode.y;
    }

    const sel = selectedEdge && selectedEdge.from === e.from && selectedEdge.to === e.to;
    ctx.save();
    ctx.strokeStyle = sel ? '#fff' : (isAttachment(toNode.type) ? '#e74c3c' : '#555');
    ctx.lineWidth   = sel ? 2.5 : 1.8;
    ctx.setLineDash(isAttachment(toNode.type) ? [5,3] : []);
    ctx.beginPath();
    const cy = (sy + ty) / 2;
    ctx.moveTo(sx, sy);
    ctx.bezierCurveTo(sx, cy, tx, cy, tx, ty);
    ctx.stroke();

    // arrowhead
    ctx.setLineDash([]);
    const angle = Math.atan2(ty - cy, tx - sx);
    ctx.fillStyle = ctx.strokeStyle;
    ctx.save();
    ctx.translate(tx, ty);
    ctx.rotate(angle + (isAttachment(toNode.type) ? 0 : Math.PI/2));
    ctx.beginPath();
    ctx.moveTo(0, -6); ctx.lineTo(4, 2); ctx.lineTo(-4, 2);
    ctx.closePath(); ctx.fill();
    ctx.restore();
    ctx.restore();
  }

  _drawDragEdge(ctx, de, nodes) {
    const fromNode = nodes.find(n => n.id === de.fromId);
    if (!fromNode) return;
    const sx = fromNode.x + (fromNode.w || NODE_W) / 2;
    const sy = fromNode.y + (fromNode.h || NODE_H);
    const tx = de.x, ty = de.y;
    const cy = (sy + ty) / 2;
    ctx.save();
    ctx.strokeStyle = '#007acc'; ctx.lineWidth = 2; ctx.setLineDash([6,3]);
    ctx.beginPath();
    ctx.moveTo(sx, sy);
    ctx.bezierCurveTo(sx, cy, tx, cy, tx, ty);
    ctx.stroke();
    ctx.restore();
  }

  _roundRect(ctx, x, y, w, h, r) {
    if (typeof r === 'number') r = [r,r,r,r];
    const [tl, tr, br, bl] = r;
    ctx.beginPath();
    ctx.moveTo(x + tl, y);
    ctx.lineTo(x + w - tr, y);         ctx.arcTo(x+w, y,    x+w,   y+h,  tr);
    ctx.lineTo(x+w, y+h-br);           ctx.arcTo(x+w, y+h,  x,     y+h,  br);
    ctx.lineTo(x + bl, y + h);         ctx.arcTo(x,   y+h,  x,     y,    bl);
    ctx.lineTo(x, y + tl);             ctx.arcTo(x,   y,    x+w,   y,    tl);
    ctx.closePath();
  }

  _truncate(ctx, text, maxW) {
    if (ctx.measureText(text).width <= maxW) return text;
    while (text.length > 1 && ctx.measureText(text + '…').width > maxW) text = text.slice(0,-1);
    return text + '…';
  }

  // ── Hit testing ──────────────────────────────────────────
  hitNode(wx, wy, nodes) {
    // iterate in reverse so top-most node wins
    for (let i = nodes.length - 1; i >= 0; i--) {
      const n = nodes[i];
      const w = n.w || NODE_W, h = n.h || NODE_H;
      if (wx >= n.x && wx <= n.x+w && wy >= n.y && wy <= n.y+h) return n;
    }
    return null;
  }

  hitOutputPort(wx, wy, nodes) {
    for (const n of nodes) {
      if (isAttachment(n.type) || !canHaveChildren(n.type)) continue;
      const px = n.x + (n.w || NODE_W) / 2;
      const py = n.y + (n.h || NODE_H);
      if (Math.hypot(wx-px, wy-py) <= PORT_R + 4) return n;
    }
    return null;
  }

  hitInputPort(wx, wy, nodes) {
    for (const n of nodes) {
      if (isAttachment(n.type)) {
        // left port
        const px = n.x, py = n.y + (n.h || NODE_H) / 2;
        if (Math.hypot(wx-px, wy-py) <= PORT_R + 4) return n;
      } else {
        const px = n.x + (n.w || NODE_W) / 2;
        const py = n.y;
        if (Math.hypot(wx-px, wy-py) <= PORT_R + 4) return n;
      }
    }
    return null;
  }

  hitEdge(wx, wy, edges, nodes) {
    for (const e of edges) {
      const fromNode = nodes.find(n => n.id === e.from);
      const toNode   = nodes.find(n => n.id === e.to);
      if (!fromNode || !toNode) continue;
      let sx, sy, tx, ty;
      if (isAttachment(toNode.type)) {
        sx = fromNode.x + (fromNode.w||NODE_W); sy = fromNode.y + (fromNode.h||NODE_H)/2;
        tx = toNode.x;                          ty = toNode.y + (toNode.h||NODE_H)/2;
      } else {
        sx = fromNode.x+(fromNode.w||NODE_W)/2; sy = fromNode.y+(fromNode.h||NODE_H);
        tx = toNode.x+(toNode.w||NODE_W)/2;     ty = toNode.y;
      }
      if (this._pointNearBezier(wx, wy, sx, sy, tx, ty, 8)) return e;
    }
    return null;
  }

  _pointNearBezier(px, py, sx, sy, tx, ty, thresh) {
    const cy = (sy+ty)/2;
    const steps = 16;
    let prev = {x:sx,y:sy};
    for (let i=1;i<=steps;i++) {
      const t = i/steps;
      const mt = 1-t;
      const x = mt*mt*mt*sx + 3*mt*mt*t*sx + 3*mt*t*t*tx + t*t*t*tx;
      const y = mt*mt*mt*sy + 3*mt*mt*t*cy + 3*mt*t*t*cy + t*t*t*ty;
      if (this._pointNearSeg(px,py,prev.x,prev.y,x,y,thresh)) return true;
      prev = {x,y};
    }
    return false;
  }

  _pointNearSeg(px,py,ax,ay,bx,by,thresh) {
    const dx=bx-ax,dy=by-ay,len2=dx*dx+dy*dy;
    if (len2===0) return Math.hypot(px-ax,py-ay)<thresh;
    const t=Math.max(0,Math.min(1,((px-ax)*dx+(py-ay)*dy)/len2));
    return Math.hypot(px-(ax+t*dx), py-(ay+t*dy)) < thresh;
  }
}

function opLabel(op) {
  const m = {Equal:'==',NotEqual:'!=',Greater:'>',Less:'<',GreaterEqual:'>=',LessEqual:'<=',
             Assign:'=',Add:'+',Subtract:'-',Multiply:'*',Divide:'/'};
  return m[op] || op;
}
