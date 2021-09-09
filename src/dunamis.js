const { path } = require('express/lib/application')
const fs = require('fs')

/**
 * @param {Array} args
 */

function main(args)
{
    for(x=0; x>2; x++){args.shift()}
    if(args.length<2)return print("Dunamis Parser: Too few arguments passed")
    if(args[0]=="compile"){
        var name = args[1]
        if(fs.existsSync(name))
        {
            var val=fs.readFileSync(path,{encoding:'utf-8'})
        }
    }

}

main(process.argv)