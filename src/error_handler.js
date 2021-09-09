class DunamisError
{
    constructor(name, details)
    {
        this.name = name,
        this.details = details
    }

    log()
    {
        var result = `${this.name}: ${this.details}`
        console.log(result)
    }
}

class IlligalCommandError extends DunamisError
{
    constructor(details)
    {
        super('Illigal Command',details)
    }
}

class InvalidFileError extends DunamisError
{
    constructor(details)
    {
        super('Invalid File',details)
    }
}

class InvalidSyntaxError extends DunamisError
{
    constructor(details)
    {
        super('Invalid Syntax',details)
    }
}

module.exports = {InvalidFileError,IlligalCommandError,DunamisError,InvalidSyntaxError}