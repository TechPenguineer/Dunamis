const { type } = require('express/lib/response');
const {TokenList, Token}=require('./token/token_constructor');
const {TokenTypes}=require('./token/tokens')
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
            if(this.currentChar=="+")
            {
                this.tokens.add(new Token(TokenTypes.PLUS))
                this.advance()
            }
        }
        return this.tokens
    }
}