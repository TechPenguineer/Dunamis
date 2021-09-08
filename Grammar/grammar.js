// Generated automatically by nearley, version 2.20.1
// http://github.com/Hardmath123/nearley
(function () {
function id(x) { return x[0]; }

const tokenPrint = { literal: "print" };
const tokenNumber = { test: x => Number.isInteger(x) };
var grammar = {
    Lexer: undefined,
    ParserRules: [
    {"name": "digit$ebnf$1$subexpression$1", "symbols": [/[0-9]/]},
    {"name": "digit$ebnf$1", "symbols": ["digit$ebnf$1$subexpression$1"]},
    {"name": "digit$ebnf$1$subexpression$2", "symbols": [/[0-9]/]},
    {"name": "digit$ebnf$1", "symbols": ["digit$ebnf$1", "digit$ebnf$1$subexpression$2"], "postprocess": function arrpush(d) {return d[0].concat([d[1]]);}},
    {"name": "digit", "symbols": ["digit$ebnf$1"]},
    {"name": "main$string$1", "symbols": [{"literal":";"}, {"literal":";"}], "postprocess": function joiner(d) {return d.join('');}},
    {"name": "main", "symbols": [tokenPrint, tokenNumber, "main$string$1"]}
]
  , ParserStart: "digit"
}
if (typeof module !== 'undefined'&& typeof module.exports !== 'undefined') {
   module.exports = grammar;
} else {
   window.grammar = grammar;
}
})();
