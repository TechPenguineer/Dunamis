const TokenTypes = {
    INT: 'num',
    FLOAT: 'float',

    // MATH
    PLUS: 'plus',
    SUBTRACT: 'minus',
    MULTIPLY: 'multiply',
    DIVIDE: 'divide',
    EXPONENT: 'exponent',
    PRECENTAGE: "precentage"
}
Object.freeze(TokenTypes)

module.exports={TokenTypes}