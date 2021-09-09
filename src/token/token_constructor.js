class Token
{
    /**
     * 
     * @param {TokenType} type
     * @param {String|Number} value
     */

    constructor(type,value)
    {
        this.type = type;
        if(value) this.value=value
        else this.value=null
    }
}

class TokenList
{
    /**
     * @private
     */
    tokens = [];

    /**
     * @private
     */
    tokensRaw=[];

    constructor()
    {
        this.tokens=[]
        this.tokensRaw=[]
    }

    /**
     * @param {Token} token
     */
    add(token)
    {
        this.tokens.push(token)
        if(token.value) this.tokensRaw.push(`${token.type}:${token.value}`)
        else this.tokensRaw.push(token.type)
    }

    /**
     * @param {Number} index
     */
    remove(index)
    {
        this.tokens.splice(index,1)
        this.tokensRaw.splice(index,1)
    }

    listTokens()
    {
        return this.tokens
    }

    list()
    {
        return this.tokensRaw
    }
}