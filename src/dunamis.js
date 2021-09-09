const fs = require('fs')
const { InvalidFileError, IlligalCommandError } = require('./error_handler')

Compile_arg_index = 2
Path_compile_arg_index = 3
require( "./error_handler" )
/**
 * @param {Array} args
 */

function main(args)
{
    for(x=0; x>2; x++){args.shift()}
    if(args.length<2)return print("Dunamis Parser: Too few arguments passed")
    if(args[Compile_arg_index]=="compile"){
        var path = args[Path_compile_arg_index]
        if(fs.existsSync(path))
        {
            var val=fs.readFileSync(path,{encoding:'utf-8'})
            console.log(val)
        }
        else
        {
            return new InvalidFileError(`File '${path}' could not be found.`).log()
        }
     
    }
    else
    {
        return new IlligalCommandError(`Command '${args[Path_compile_arg_index]}' does not exist.`).log()
    }

}

main(process.argv)