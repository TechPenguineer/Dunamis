const { type } = require('express/lib/response');
const {TokenList, Token}=require('./token/token_constructor');
const {TokenTypes, constants}=require('./token/tokens');
const { InvalidSyntaxError } = require('./error_handler');

class Lexer {
    /**
     * 
     * @param {String} fn 
     * @param {String} data 
     */
    constructor(fn,data)
    {
        this.fn=fn;
        this.data=data;
        this.tokens=new TokenList();
        this.currentChar=null;
        this.pos=-1;
        this.advance()
    }
    advance()
    {
        this.pos++;
        if(this.pos < this.data.length)
        {
            this.currentChar=this.data[this.pos]
        }
        else
        {
            this.currentChar=null
        }
    }
    /**
     * 
     * @returns {TokenList}
     */
    start()
    {
        while(this.currentChar != null)
        {
            if(constants.numbers.includes(this.currentChar)){this.tokens.add(this.makeNumber())
            if(this.currentChar=="+"){this.tokens.add(new Token(TokenTypes.PLUS));this.advance()}
            else if(this.currentChar=="-"){this.tokens.add(new Token(TokenTypes.SUBTRACT));this.advance()}
            else if(this.currentChar=="*"){this.tokens.add(new Token(TokenTypes.MULTIPLY));this.advance()}
            else if(this.currentChar=="/"){this.tokens.add(new Token(TokenTypes.DIVIDE));this.advance()}
            else if(this.currentChar=="^"){this.tokens.add(new Token(TokenTypes.EXPONENT)); this.advance()}
            else if(this.currentChar=="%"){this.tokens.add(new Token(TokenTypes.PRECENTAGE)); this.advance()}
            }
            else
            {
                this.advance()
            }
        }
        return this.tokens
    }
    /**
     * @returns {Token}
     */
    makeNumber()
    {
        var num = ''
        var dotcount=0
        var digits=constants.numbers
        digits+="."

        while(this.currentChar != null && digits.includes(this.currentChar))
        {
            if(this.currentChar == '.')
            {
                if (dotcount==1) return new InvalidSyntaxError(`'${num}' expected float or integer.`).log()

                dotcount++
                num+='.'
            }
            else
            {
                num+=this.currentChar
            }
            this.advance()
        }
        if(dotcount==0)
        {
            return new Token(TokenTypes.INT, parseInt(num))
        }
        else
        {
            return new Token(TokenTypes.FLOAT, parseFloat(num))
        }
    }
}

module.exports={Lexer}