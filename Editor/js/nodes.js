// nodes.js — Node type definitions, categories, property schemas

const NodeCategory = { ROOT: 'root', COMPOSITE: 'composite', ACTION: 'action', CONDITION: 'condition', DECORATOR: 'decorator', ATTACHMENT: 'attachment' };

const CAT_COLOR = {
  root:       { bg: '#1a3a4a', header: '#17a589', port: '#1abc9c' },
  composite:  { bg: '#1a2d45', header: '#2980b9', port: '#3498db' },
  action:     { bg: '#1a3328', header: '#27ae60', port: '#2ecc71' },
  condition:  { bg: '#3d2e00', header: '#d4ac0d', port: '#f1c40f' },
  decorator:  { bg: '#2d1f40', header: '#8e44ad', port: '#9b59b6' },
  attachment: { bg: '#3d1a1a', header: '#c0392b', port: '#e74c3c' },
};

// property schema per node type
const NODE_PROPS = {
  // composites
  Selector:              [],
  Sequence:              [],
  Parallel:              [
    { key:'ChildFinishPolicy', label:'Child Finish Policy', type:'select', options:['Loop','Once'], default:'Loop' },
    { key:'FailurePolicy',     label:'Fail Policy',         type:'select', options:['FailOnOne_SucceedOnAll','FailOnAll_SucceedOnOne','FailOnOne_SucceedOnOne'], default:'FailOnOne_SucceedOnAll' },
    { key:'SuccessPolicy',     label:'Success Policy',      type:'select', options:['FailOnOne_SucceedOnAll','FailOnAll_SucceedOnOne','FailOnOne_SucceedOnOne'], default:'FailOnAll_SucceedOnOne' },
  ],
  IfElse:                [],
  SelectorLoop:          [],
  SelectorProbability:   [],
  SelectorStochastic:    [],
  SequenceStochastic:    [],
  ReferenceBehavior:     [{ key:'ReferencedTreePath', label:'Referenced Tree Path', type:'string', default:'' }],
  WithPrecondition:      [],
  // actions
  Action:                [
    { key:'MethodName',      label:'Method Name',       type:'string', default:'' },
    { key:'ResultFuncName',  label:'Result Func (opt)', type:'string', default:'' },
  ],
  Assignment:            [
    { key:'Opl',      label:'Left Operand (target)', type:'string', default:'Self.myVar' },
    { key:'Opr',      label:'Right Operand (value)', type:'string', default:'' },
  ],
  Compute:               [
    { key:'Opl',      label:'Result Target', type:'string', default:'Self.result' },
    { key:'Operator', label:'Operator',      type:'select', options:['+','-','*','/','='], default:'+' },
    { key:'Opr1',     label:'Operand 1',     type:'string', default:'' },
    { key:'Opr2',     label:'Operand 2',     type:'string', default:'' },
  ],
  Noop:                  [],
  End:                   [{ key:'EndStatus', label:'End Status', type:'select', options:['Success','Failure'], default:'Success' }],
  Wait:                  [{ key:'Time', label:'Time (seconds)', type:'float', default:'1.0' }],
  WaitFrames:            [{ key:'Frames', label:'Frames', type:'int', default:'1' }],
  WaitForSignal:         [{ key:'Signal', label:'Signal Name', type:'string', default:'' }],
  // conditions
  Condition:             [
    { key:'Opl',      label:'Left Operand',  type:'string', default:'Self.health' },
    { key:'Operator', label:'Operator',      type:'select', options:['Equal','NotEqual','Greater','Less','GreaterEqual','LessEqual'], default:'Greater' },
    { key:'Opr',      label:'Right Operand', type:'string', default:'0' },
  ],
  And:                   [],
  Or:                    [],
  True:                  [],
  False:                 [],
  ConditionBase:         [],
  // decorators
  AlwaysFailure:         [],
  AlwaysRunning:         [],
  AlwaysSuccess:         [],
  Not:                   [],
  Loop:                  [{ key:'Count', label:'Count (-1 = infinite)', type:'int', default:'-1' }],
  LoopUntil:             [{ key:'Count', label:'Count',  type:'int', default:'1' }, { key:'Until', label:'Until (true/false)', type:'select', options:['true','false'], default:'true' }],
  Repeat:                [{ key:'Count', label:'Count',  type:'int', default:'1' }],
  Count:                 [{ key:'Count', label:'Count',  type:'int', default:'1' }],
  CountLimit:            [{ key:'Count', label:'Max Count', type:'int', default:'1' }],
  Time:                  [{ key:'Time',   label:'Time (seconds)', type:'float', default:'1.0' }],
  Frames:                [{ key:'Frames', label:'Frames',         type:'int',   default:'1' }],
  FailureUntil:          [{ key:'Count', label:'Count',  type:'int', default:'1' }],
  SuccessUntil:          [{ key:'Count', label:'Count',  type:'int', default:'1' }],
  Iterator:              [
    { key:'Opl', label:'Collection',  type:'string', default:'Self.myList' },
    { key:'Opr', label:'Iterator Var', type:'string', default:'Self.item' },
  ],
  Log:                   [{ key:'Message', label:'Message', type:'string', default:'log message' }],
  Weight:                [{ key:'Weight', label:'Weight (0-1)', type:'float', default:'1.0' }],
  // attachments
  Precondition:          [
    { key:'Opl',      label:'Left Operand',  type:'string', default:'Self.health' },
    { key:'Operator', label:'Operator',      type:'select', options:['Equal','NotEqual','Greater','Less','GreaterEqual','LessEqual'], default:'Greater' },
    { key:'Opr',      label:'Right Operand', type:'string', default:'0' },
    { key:'Phase',    label:'Phase',         type:'select', options:['Enter','Update','Both'], default:'Enter' },
    { key:'IsAnd',    label:'Is AND (not OR)', type:'bool', default:false },
  ],
  Effector:              [
    { key:'Opl',      label:'Left Operand',  type:'string', default:'Self.health' },
    { key:'Operator', label:'Operator',      type:'select', options:['Assign','Add','Subtract','Multiply','Divide'], default:'Assign' },
    { key:'Opr',      label:'Right Operand', type:'string', default:'0' },
    { key:'Phase',    label:'Phase',         type:'select', options:['Success','Failure','Both'], default:'Both' },
  ],
  Event:                 [
    { key:'EventName',     label:'Event Name',      type:'string', default:'' },
    { key:'TriggeredOnce', label:'Triggered Once',  type:'bool',   default:false },
  ],
};

// master list
const NODE_TYPES = [
  { type:'Root',               category:NodeCategory.ROOT,       label:'Root',                tooltip:'Entry point of the behavior tree.' },
  // composites
  { type:'Selector',           category:NodeCategory.COMPOSITE,  label:'Selector',            tooltip:'Tries children left-to-right. Returns Success on first success.' },
  { type:'Sequence',           category:NodeCategory.COMPOSITE,  label:'Sequence',            tooltip:'Runs children left-to-right. Fails on first failure.' },
  { type:'Parallel',           category:NodeCategory.COMPOSITE,  label:'Parallel',            tooltip:'Runs all children simultaneously. Policy controls completion.' },
  { type:'IfElse',             category:NodeCategory.COMPOSITE,  label:'IfElse',              tooltip:'First child is condition; second runs on true, third on false.' },
  { type:'SelectorLoop',       category:NodeCategory.COMPOSITE,  label:'SelectorLoop',        tooltip:'Loops until a child returns Success.' },
  { type:'SelectorProbability',category:NodeCategory.COMPOSITE,  label:'SelectorProbability', tooltip:'Selects child by weighted probability.' },
  { type:'SelectorStochastic', category:NodeCategory.COMPOSITE,  label:'SelectorStochastic',  tooltip:'Randomly selects a child to run.' },
  { type:'SequenceStochastic', category:NodeCategory.COMPOSITE,  label:'SequenceStochastic',  tooltip:'Runs all children in random order.' },
  { type:'ReferenceBehavior',  category:NodeCategory.COMPOSITE,  label:'ReferenceBehavior',   tooltip:'References and runs another behavior tree by path.' },
  { type:'WithPrecondition',   category:NodeCategory.COMPOSITE,  label:'WithPrecondition',    tooltip:'Runs child only if precondition passes.' },
  // actions
  { type:'Action',             category:NodeCategory.ACTION,     label:'Action',              tooltip:'Calls a named method on the agent.' },
  { type:'Assignment',         category:NodeCategory.ACTION,     label:'Assignment',          tooltip:'Assigns a value to a property.' },
  { type:'Compute',            category:NodeCategory.ACTION,     label:'Compute',             tooltip:'Performs arithmetic on properties.' },
  { type:'Noop',               category:NodeCategory.ACTION,     label:'Noop',                tooltip:'Does nothing. Returns Success.' },
  { type:'End',                category:NodeCategory.ACTION,     label:'End',                 tooltip:'Ends the behavior tree with Success or Failure.' },
  { type:'Wait',               category:NodeCategory.ACTION,     label:'Wait',                tooltip:'Waits for a given number of seconds.' },
  { type:'WaitFrames',         category:NodeCategory.ACTION,     label:'WaitFrames',          tooltip:'Waits for a given number of frames.' },
  { type:'WaitForSignal',      category:NodeCategory.ACTION,     label:'WaitForSignal',       tooltip:'Waits until a named signal is sent to this agent.' },
  // conditions
  { type:'Condition',          category:NodeCategory.CONDITION,  label:'Condition',           tooltip:'Evaluates a comparison between two operands.' },
  { type:'And',                category:NodeCategory.CONDITION,  label:'And',                 tooltip:'Succeeds only if all child conditions succeed.' },
  { type:'Or',                 category:NodeCategory.CONDITION,  label:'Or',                  tooltip:'Succeeds if any child condition succeeds.' },
  { type:'True',               category:NodeCategory.CONDITION,  label:'True',                tooltip:'Always returns Success.' },
  { type:'False',              category:NodeCategory.CONDITION,  label:'False',               tooltip:'Always returns Failure.' },
  { type:'ConditionBase',      category:NodeCategory.CONDITION,  label:'ConditionBase',       tooltip:'Base condition node for custom logic.' },
  // decorators
  { type:'AlwaysFailure',      category:NodeCategory.DECORATOR,  label:'AlwaysFailure',       tooltip:'Forces child result to Failure.' },
  { type:'AlwaysRunning',      category:NodeCategory.DECORATOR,  label:'AlwaysRunning',       tooltip:'Forces child result to Running.' },
  { type:'AlwaysSuccess',      category:NodeCategory.DECORATOR,  label:'AlwaysSuccess',       tooltip:'Forces child result to Success.' },
  { type:'Not',                category:NodeCategory.DECORATOR,  label:'Not',                 tooltip:'Inverts child result (Success↔Failure).' },
  { type:'Loop',               category:NodeCategory.DECORATOR,  label:'Loop',                tooltip:'Loops child execution N times (-1 = forever).' },
  { type:'LoopUntil',          category:NodeCategory.DECORATOR,  label:'LoopUntil',           tooltip:'Loops child until it returns the target status.' },
  { type:'Repeat',             category:NodeCategory.DECORATOR,  label:'Repeat',              tooltip:'Repeats child N times.' },
  { type:'Count',              category:NodeCategory.DECORATOR,  label:'Count',               tooltip:'Tracks execution count.' },
  { type:'CountLimit',         category:NodeCategory.DECORATOR,  label:'CountLimit',          tooltip:'Limits how many times child can run.' },
  { type:'Time',               category:NodeCategory.DECORATOR,  label:'Time',                tooltip:'Runs child for a fixed duration.' },
  { type:'Frames',             category:NodeCategory.DECORATOR,  label:'Frames',              tooltip:'Runs child for N frames.' },
  { type:'FailureUntil',       category:NodeCategory.DECORATOR,  label:'FailureUntil',        tooltip:'Returns Failure until child succeeds N times.' },
  { type:'SuccessUntil',       category:NodeCategory.DECORATOR,  label:'SuccessUntil',        tooltip:'Returns Success until child fails N times.' },
  { type:'Iterator',           category:NodeCategory.DECORATOR,  label:'Iterator',            tooltip:'Iterates over a collection.' },
  { type:'Log',                category:NodeCategory.DECORATOR,  label:'Log',                 tooltip:'Logs a message, passes child result through.' },
  { type:'Weight',             category:NodeCategory.DECORATOR,  label:'Weight',              tooltip:'Used inside SelectorProbability to weight a child.' },
  // attachments
  { type:'Precondition',       category:NodeCategory.ATTACHMENT, label:'Precondition',        tooltip:'Attachment: gate node execution on a condition.' },
  { type:'Effector',           category:NodeCategory.ATTACHMENT, label:'Effector',            tooltip:'Attachment: side-effect after node completes.' },
  { type:'Event',              category:NodeCategory.ATTACHMENT, label:'Event',               tooltip:'Attachment: trigger on a named event.' },
];

const NODE_TYPE_MAP = Object.fromEntries(NODE_TYPES.map(n => [n.type, n]));

function getNodeProps(type) { return NODE_PROPS[type] || []; }
function getCatColor(cat)   { return CAT_COLOR[cat] || CAT_COLOR.composite; }

function isAttachment(type) { return NODE_TYPE_MAP[type]?.category === NodeCategory.ATTACHMENT; }
function isComposite(type)  { return NODE_TYPE_MAP[type]?.category === NodeCategory.COMPOSITE; }
function isDecorator(type)  { return NODE_TYPE_MAP[type]?.category === NodeCategory.DECORATOR; }

// attachment types can only connect to their parent (they sit on the side)
function canHaveChildren(type) { return !isAttachment(type); }
function maxChildren(type) {
  if (isAttachment(type)) return 0;
  if (['Not','AlwaysSuccess','AlwaysFailure','AlwaysRunning','Loop','LoopUntil','Repeat',
       'Count','CountLimit','Time','Frames','FailureUntil','SuccessUntil','Iterator','Log','Weight',
       'WithPrecondition'].includes(type)) return 1;
  if (type === 'IfElse') return 3;
  return Infinity;
}
