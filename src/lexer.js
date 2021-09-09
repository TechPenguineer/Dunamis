const moo = require('moo');

let lexer = moo.compile
(
    {
        WS:     /[ \t]*/,

        // PARENS
        LPAREN: "(",
        RPAREN: ")",

        // STRINGS
        string: /"(?:\\["\\]|[^\n"\\])*"/,

        // KEYWORDS
        keywords: ['while','if','else'],

        // MISC
        NL: {match: /\n/, lineBreaks: true}
    }
)

lexer.reset('i have 3 cows')

    let token;
        while(token==lexer.next())
            console.log(lexer.next())
