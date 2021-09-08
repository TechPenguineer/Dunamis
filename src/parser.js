const nearley = require( 'nearley' )
var grammar = require('../Grammar/grammar')

var parser = new nearley.Parser(nearley.Grammar.fromCompiled(grammar));
try {
    OUTPUT = parser.feed("1");
    console.log(OUTPUT);
}
catch (e) {
    console.log("Parser Failed: " + e.message);
}