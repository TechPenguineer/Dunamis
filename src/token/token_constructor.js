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