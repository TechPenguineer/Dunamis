#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/publish.h"



int checkForManifest()
{

    printf("\033[1m\033[33m⌛ - Checking for Manifest");

    FILE* f = fopen("package.yaml", "rw");

    if(f)
    {
        printf("\r                                       ");
        printf("\r\033[1m\033[32m✅ - Manifest Found\n\n");
        return 1;
    }
    else 
    {
        printf("\r                                       ");
        printf("\r\033[1m\033[31m❌ - Manifest Not Found\n");
        exit(1);
    }
}

void prompt()
{
    if(checkForManifest()==1)
    {
        printf("Go for publishing!\n");
    }
}