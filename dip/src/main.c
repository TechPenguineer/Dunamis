#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/errors.h"

int main(int argc, char *argv[])
{ 
   
    
    if(strcmp(argv[1], "install")==0)
    {
        if(!argv[2])
            printf("\033[1m\033[31m%s\033[0m\x1b[31m\033[31mNo package provided. Couldnt be installed\n\033[0m",ERROR_PREFIX);
        
    }
}