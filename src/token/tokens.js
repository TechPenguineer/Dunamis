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

const constants = 
{
    numbers: "1234567890"
}
Object.freeze(constants)
module.exports={TokenTypes,constants}