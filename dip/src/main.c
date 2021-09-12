#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/errors.h"

int main(int argc, char *argv[])
{ 
    
    if(strcmp(argv[1], "install")==0)
    {
        if(argc != 2)
            printf("%s",NO_PACKAGE_PROVIDED);
        
    }
}