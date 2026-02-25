// nodes.js — Node type definitions, categories, property schemas
// Property keys MUST match what the plugin's LoadFromProperties() reads (Prop.Name comparisons in .cpp)
// XML wire format: <property name="Key" value="Val"/>

const NodeCategory = { ROOT:'root', COMPOSITE:'composite', ACTION:'action', CONDITION:'condition', DECORATOR:'decorator', ATTACHMENT:'attachment' };

const CAT_COLOR = {
  root:       { bg:'#1a3a4a', header:'#17a589', port:'#1abc9c' },
  composite:  { bg:'#1a2d45', header:'#2980b9', port:'#3498db' },
  action:     { bg:'#1a3328', header:'#27ae60', port:'#2ecc71' },
  condition:  { bg:'#3d2e00', header:'#d4ac0d', port:'#f1c40f' },
  decorator:  { bg:'#2d1f40', header:'#8e44ad', port:'#9b59b6' },
  attachment: { bg:'#3d1a1a', header:'#c0392b', port:'#e74c3c' },
};

// Property schemas — keys match C++ Prop.Name strings exactly
const NODE_PROPS = {
  // ── Composites ──────────────────────────────────────────
  Selector:            [],
  Sequence:            [],
  Parallel:            [
    { key:'ChildFinishPolicy', label:'Child Finish Policy', type:'select', options:['Loop','Once'],                                                                default:'Loop' },
    { key:'FailurePolicy',     label:'Fail Policy',         type:'select', options:['FailOnOne_SucceedOnAll','FailOnAll_SucceedOnOne','FailOnOne_SucceedOnOne'],    default:'FailOnOne_SucceedOnAll' },
    { key:'SuccessPolicy',     label:'Success Policy',      type:'select', options:['FailOnOne_SucceedOnAll','FailOnAll_SucceedOnOne','FailOnOne_SucceedOnOne'],    default:'FailOnAll_SucceedOnOne' },
  ],
  IfElse:              [],
  SelectorLoop:        [],
  SelectorProbability: [],
  SelectorStochastic:  [],
  SequenceStochastic:  [],
  ReferenceBehavior:   [{ key:'ReferencedTreePath', label:'Tree Path', type:'string', default:'' }],
  WithPrecondition:    [],

  // ── Actions ─────────────────────────────────────────────
  // BehaviacActions.cpp: Prop.Name == "Method" | "ResultOption"  (NOT "MethodName")
  Action:              [
    { key:'Method',       label:'Method Name',   type:'string', default:'' },
    { key:'ResultOption', label:'Result Option',  type:'select', options:['BT_SUCCESS','BT_FAILURE','BT_RUNNING'], default:'BT_SUCCESS' },
  ],
  // BehaviacActions.cpp: Prop.Name == "Opl" | "Opr"
  Assignment:          [
    { key:'Opl', label:'Target Property', type:'string', default:'Self.myVar' },
    { key:'Opr', label:'Value / Source',  type:'string', default:'' },
  ],
  // BehaviacActions.cpp: Prop.Name == "Opl" | "Operator" | "Opr1" | "Opr2"
  Compute:             [
    { key:'Opl',      label:'Result Property', type:'string', default:'Self.result' },
    { key:'Operator', label:'Operator',        type:'select', options:['Add','Sub','Mul','Div'], default:'Add' },
    { key:'Opr1',     label:'Operand 1',       type:'string', default:'' },
    { key:'Opr2',     label:'Operand 2',       type:'string', default:'' },
  ],
  Noop:                [],
  // BehaviacActions.cpp: Prop.Name == "EndStatus" | "EndOutermost"
  End:                 [
    { key:'EndStatus',    label:'End Status',    type:'select', options:['BT_SUCCESS','BT_FAILURE'], default:'BT_SUCCESS' },
    { key:'EndOutermost', label:'End Outermost', type:'bool',   default:false },
  ],
  // BehaviacActions.cpp: Prop.Name == "Time"
  Wait:                [{ key:'Time',   label:'Time (seconds)', type:'string', default:'1.0' }],
  // BehaviacActions.cpp: Prop.Name == "Frames"
  WaitFrames:          [{ key:'Frames', label:'Frames',         type:'string', default:'1' }],
  // BehaviacActions.cpp: Prop.Name == "Signal"
  WaitForSignal:       [{ key:'Signal', label:'Signal Name',    type:'string', default:'' }],

  // ── Conditions ──────────────────────────────────────────
  // BehaviacConditions.cpp: Prop.Name == "Opl" | "Opr" | "Operator"
  Condition:           [
    { key:'Opl',      label:'Left Operand',  type:'string', default:'Self.health' },
    { key:'Operator', label:'Operator',      type:'select', options:['Equal','NotEqual','Greater','Less','GreaterEqual','LessEqual'], default:'Greater' },
    { key:'Opr',      label:'Right Operand', type:'string', default:'0' },
  ],
  And:          [],
  Or:           [],
  True:         [],
  False:        [],
  ConditionBase:[],

  // ── Decorators ──────────────────────────────────────────
  AlwaysFailure:  [],
  AlwaysRunning:  [],
  AlwaysSuccess:  [],
  Not:            [],
  Loop:           [{ key:'Count', label:'Count (-1 = ∞)', type:'string', default:'-1' }],
  LoopUntil:      [
    { key:'Count', label:'Count', type:'string', default:'1' },
    { key:'Until', label:'Until', type:'select', options:['true','false'], default:'true' },
  ],
  Repeat:         [{ key:'Count', label:'Count', type:'string', default:'1' }],
  Count:          [{ key:'Count', label:'Count', type:'string', default:'1' }],
  CountLimit:     [{ key:'Count', label:'Max Count', type:'string', default:'1' }],
  Time:           [{ key:'Time',   label:'Time (seconds)', type:'string', default:'1.0' }],
  Frames:         [{ key:'Frames', label:'Frames',         type:'string', default:'1' }],
  FailureUntil:   [{ key:'Count', label:'Count', type:'string', default:'1' }],
  SuccessUntil:   [{ key:'Count', label:'Count', type:'string', default:'1' }],
  Iterator:       [
    { key:'Opl', label:'Collection',   type:'string', default:'Self.myList' },
    { key:'Opr', label:'Iterator Var', type:'string', default:'Self.item' },
  ],
  Log:            [{ key:'Message', label:'Message', type:'string', default:'' }],
  Weight:         [{ key:'Weight',  label:'Weight',  type:'string', default:'1.0' }],

  // ── Attachments ─────────────────────────────────────────
  // BehaviacAttachment.cpp: "Phase" | "Negate"
  // BehaviacPrecondition additionally: "Opl" | "Opr" | "Operator"
  Precondition:   [
    { key:'Opl',      label:'Left Operand',  type:'string', default:'Self.health' },
    { key:'Operator', label:'Operator',      type:'select', options:['Equal','NotEqual','Greater','Less','GreaterEqual','LessEqual'], default:'Equal' },
    { key:'Opr',      label:'Right Operand', type:'string', default:'true' },
    { key:'Phase',    label:'Phase',         type:'select', options:['Enter','Update','Both'], default:'Enter' },
    { key:'Negate',   label:'Negate (NOT)',  type:'bool',   default:false },
  ],
  // BehaviacEffector: "Phase", assignment via Opl/Opr
  Effector:       [
    { key:'Opl',      label:'Target Property', type:'string', default:'Self.health' },
    { key:'Operator', label:'Operator',        type:'select', options:['Assign','Add','Sub','Mul','Div'], default:'Assign' },
    { key:'Opr',      label:'Value / Source',  type:'string', default:'0' },
    { key:'Phase',    label:'Phase',           type:'select', options:['Success','Failure','Both'], default:'Both' },
  ],
  // BehaviacEventAttachment: "EventName" | "TriggeredOnce"
  Event:          [
    { key:'EventName',     label:'Event Name',     type:'string', default:'' },
    { key:'TriggeredOnce', label:'Triggered Once', type:'bool',   default:false },
  ],
};

// ── Master node list ─────────────────────────────────────
const NODE_TYPES = [
  { type:'Root',                category:NodeCategory.ROOT,       label:'Root',                tooltip:'Entry point of the behavior tree.' },
  // composites
  { type:'Selector',            category:NodeCategory.COMPOSITE,  label:'Selector',            tooltip:'Tries children left→right. Returns Success on first success.' },
  { type:'Sequence',            category:NodeCategory.COMPOSITE,  label:'Sequence',            tooltip:'Runs children left→right. Stops and fails on first failure.' },
  { type:'Parallel',            category:NodeCategory.COMPOSITE,  label:'Parallel',            tooltip:'Runs all children simultaneously. Policy controls completion.' },
  { type:'IfElse',              category:NodeCategory.COMPOSITE,  label:'IfElse',              tooltip:'Child[0]=condition; Child[1]=then; Child[2]=else.' },
  { type:'SelectorLoop',        category:NodeCategory.COMPOSITE,  label:'SelectorLoop',        tooltip:'Loops until a child returns Success.' },
  { type:'SelectorProbability', category:NodeCategory.COMPOSITE,  label:'SelectorProbability', tooltip:'Selects child by weighted probability.' },
  { type:'SelectorStochastic',  category:NodeCategory.COMPOSITE,  label:'SelectorStochastic',  tooltip:'Randomly selects a child to run.' },
  { type:'SequenceStochastic',  category:NodeCategory.COMPOSITE,  label:'SequenceStochastic',  tooltip:'Runs all children in random order.' },
  { type:'ReferenceBehavior',   category:NodeCategory.COMPOSITE,  label:'ReferenceBehavior',   tooltip:'References and runs another behavior tree by path.' },
  { type:'WithPrecondition',    category:NodeCategory.COMPOSITE,  label:'WithPrecondition',    tooltip:'Runs child only if precondition passes.' },
  // actions
  { type:'Action',              category:NodeCategory.ACTION,     label:'Action',              tooltip:'Calls a named method on the agent. Plugin reads: Method, ResultOption.' },
  { type:'Assignment',          category:NodeCategory.ACTION,     label:'Assignment',          tooltip:'Assigns Opr value to Opl property.' },
  { type:'Compute',             category:NodeCategory.ACTION,     label:'Compute',             tooltip:'Opl = Opr1 <Operator> Opr2.' },
  { type:'Noop',                category:NodeCategory.ACTION,     label:'Noop',                tooltip:'Does nothing. Returns Success.' },
  { type:'End',                 category:NodeCategory.ACTION,     label:'End',                 tooltip:'Ends the behavior tree with EndStatus.' },
  { type:'Wait',                category:NodeCategory.ACTION,     label:'Wait',                tooltip:'Waits Time seconds. Plugin reads: Time.' },
  { type:'WaitFrames',          category:NodeCategory.ACTION,     label:'WaitFrames',          tooltip:'Waits Frames ticks. Plugin reads: Frames.' },
  { type:'WaitForSignal',       category:NodeCategory.ACTION,     label:'WaitForSignal',       tooltip:'Waits until Signal is sent to agent. Plugin reads: Signal.' },
  // conditions
  { type:'Condition',           category:NodeCategory.CONDITION,  label:'Condition',           tooltip:'Evaluates: Opl <Operator> Opr. Plugin reads: Opl, Operator, Opr.' },
  { type:'And',                 category:NodeCategory.CONDITION,  label:'And',                 tooltip:'Succeeds only if ALL child conditions succeed.' },
  { type:'Or',                  category:NodeCategory.CONDITION,  label:'Or',                  tooltip:'Succeeds if ANY child condition succeeds.' },
  { type:'True',                category:NodeCategory.CONDITION,  label:'True',                tooltip:'Always returns Success.' },
  { type:'False',               category:NodeCategory.CONDITION,  label:'False',               tooltip:'Always returns Failure.' },
  { type:'ConditionBase',       category:NodeCategory.CONDITION,  label:'ConditionBase',       tooltip:'Base condition node for custom logic.' },
  // decorators
  { type:'AlwaysFailure',       category:NodeCategory.DECORATOR,  label:'AlwaysFailure',       tooltip:'Forces child result to Failure.' },
  { type:'AlwaysRunning',       category:NodeCategory.DECORATOR,  label:'AlwaysRunning',       tooltip:'Forces child result to Running.' },
  { type:'AlwaysSuccess',       category:NodeCategory.DECORATOR,  label:'AlwaysSuccess',       tooltip:'Forces child result to Success.' },
  { type:'Not',                 category:NodeCategory.DECORATOR,  label:'Not',                 tooltip:'Inverts child result (Success↔Failure).' },
  { type:'Loop',                category:NodeCategory.DECORATOR,  label:'Loop',                tooltip:'Loops child N times (Count=-1 = forever).' },
  { type:'LoopUntil',           category:NodeCategory.DECORATOR,  label:'LoopUntil',           tooltip:'Loops child until it returns the target status.' },
  { type:'Repeat',              category:NodeCategory.DECORATOR,  label:'Repeat',              tooltip:'Repeats child Count times.' },
  { type:'Count',               category:NodeCategory.DECORATOR,  label:'Count',               tooltip:'Tracks execution count.' },
  { type:'CountLimit',          category:NodeCategory.DECORATOR,  label:'CountLimit',          tooltip:'Limits how many times child can run.' },
  { type:'Time',                category:NodeCategory.DECORATOR,  label:'Time',                tooltip:'Runs child for a fixed Time duration.' },
  { type:'Frames',              category:NodeCategory.DECORATOR,  label:'Frames',              tooltip:'Runs child for N Frames.' },
  { type:'FailureUntil',        category:NodeCategory.DECORATOR,  label:'FailureUntil',        tooltip:'Returns Failure until child succeeds Count times.' },
  { type:'SuccessUntil',        category:NodeCategory.DECORATOR,  label:'SuccessUntil',        tooltip:'Returns Success until child fails Count times.' },
  { type:'Iterator',            category:NodeCategory.DECORATOR,  label:'Iterator',            tooltip:'Iterates Opl collection, binding each item to Opr.' },
  { type:'Log',                 category:NodeCategory.DECORATOR,  label:'Log',                 tooltip:'Logs Message, passes child result through.' },
  { type:'Weight',              category:NodeCategory.DECORATOR,  label:'Weight',              tooltip:'Used inside SelectorProbability to weight a child.' },
  // attachments
  { type:'Precondition',        category:NodeCategory.ATTACHMENT, label:'Precondition',        tooltip:'Gate: blocks node execution unless Opl <Operator> Opr. Phase: Enter/Update/Both.' },
  { type:'Effector',            category:NodeCategory.ATTACHMENT, label:'Effector',            tooltip:'Side-effect after node completes: Opl = Opr on Phase.' },
  { type:'Event',               category:NodeCategory.ATTACHMENT, label:'Event',               tooltip:'Triggers on EventName. TriggeredOnce=true fires only first time.' },
];

const NODE_TYPE_MAP = Object.fromEntries(NODE_TYPES.map(n => [n.type, n]));

function getNodeProps(type)  { return NODE_PROPS[type] || []; }
function getCatColor(cat)    { return CAT_COLOR[cat] || CAT_COLOR.composite; }
function isAttachment(type)  { return NODE_TYPE_MAP[type]?.category === NodeCategory.ATTACHMENT; }
function isComposite(type)   { return NODE_TYPE_MAP[type]?.category === NodeCategory.COMPOSITE; }
function isDecorator(type)   { return NODE_TYPE_MAP[type]?.category === NodeCategory.DECORATOR; }
function canHaveChildren(type) { return !isAttachment(type); }
function maxChildren(type) {
  if (isAttachment(type)) return 0;
  if (['Not','AlwaysSuccess','AlwaysFailure','AlwaysRunning','Loop','LoopUntil','Repeat',
       'Count','CountLimit','Time','Frames','FailureUntil','SuccessUntil','Iterator','Log','Weight',
       'WithPrecondition'].includes(type)) return 1;
  if (type === 'IfElse') return 3;
  return Infinity;
}
