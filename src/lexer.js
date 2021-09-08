const moo = require('moo');

let lexer = moo.compile
(
    {
        WS:     /[ \t]*/,

        // PARENS
        LPAREN: "(",
        RPAREN: ")",

        // STRINGS
        string: /"(?:\\["\\]|[^\n"\\])*"/
        
        NL: {match: /\n/, lineBreaks: true}
    }
)