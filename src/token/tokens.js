const TokenTypes = {
    INT: 'num',
    FLOAT: 'float',

    // MATH
    PLUS: 'plus',
    SUBTRACT: 'sub',
    MULTIPLY: 'multi',
    DIVIDE: 'frac',
    EXPONENT: 'expo',
    PRECENTAGE: "precent"
}
Object.freeze(TokenTypes)

module.exports={TokenTypes}