const moo = require('moo');

let lexer = moo.compile
(
    {
        WS:     /[ \t]*/,
        NL: {match: /\n/, lineBreaks: true}
    }
)