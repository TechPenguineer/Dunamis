const fs = require('fs')
import "./error_handler"
/**
 * @param {Array} args
 */

function main(args)
{
    for(x=0; x>2; x++){args.shift()}
    if(args.length<2)return print("Dunamis Parser: Too few arguments passed")
    if(args[0]=="compile"){
        var path = args[1]
        if(fs.existsSync(path))
        {
            var val=fs.readFileSync(path,{encoding:'utf-8'})
            console.log(val)
        }
        else
        {
            return new InvalidFileError(`File '${path}' could not be found`).log()
        }
    }

}

main(process.argv)