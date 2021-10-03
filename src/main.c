#include "include/main.h"
#include "include/hermes_lexer.h"
#include "include/hermes_parser.h"
#include "include/hermes_runtime.h"
#include "include/hermes_cleanup.h"
#include "include/string_utils.h"
#include "include/io.h"
#include <string.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <errno.h>
#include <dirent.h>

volatile unsigned int interactive;


void int_handler(int sig)
{
    interactive = 0;
}

int main(int argc, char* argv[])
{
    interactive = 0;
    signal(SIGINT, int_handler);

    runtime_T* runtime = init_runtime();
    hermes_lexer_T* lexer = (void*)0;
    hermes_parser_T* parser = (void*)0;
    AST_T* node = (void*)0;
    

    
    if (argc < 2)
    {
        interactive = 1;
            //    printf("\e[1;31m /$$$$$$$                                              /$$          \n");
            //    printf("| $$__  $$                                            |__/          \n");
            //    printf("| $$  \\ $$ /$$   /$$ /$$$$$$$   /$$$$$$  /$$$$$$/$$$$  /$$  /$$$$$$$\n");
            //    printf("| $$  | $$| $$  | $$| $$__  $$ |____  $$| $$_  $$_  $$| $$ /$$_____/\n");
            //    printf("| $$  | $$| $$  | $$| $$  \\ $$  /$$$$$$$| $$ \\ $$ \\ $$| $$|  $$$$$$ \n");
            //    printf("| $$  | $$| $$  | $$| $$  | $$ /$$__  $$| $$ | $$ | $$| $$ \\____  $$\n");
            //    printf("| $$$$$$$/|  $$$$$$/| $$  | $$|  $$$$$$$| $$ | $$ | $$| $$ /$$$$$$$/\n");
            //    printf("|_______/  \\______/ |__/  |__/ \\_______/|__/ |__/ |__/|__/|_______/ \n");
            //    printf("\e[1;31m\n===================================================================\n");
            //    printf("\n\e[1;36m\t\tVersion 0.0.0.1     -     Alpha Version 1\n\e[0m");
                printf(" /$$$$$$$                                              /$$          \n");
                printf("| $$__  $$                                            |__/          \n");
                printf("| $$  \\ $$ /$$   /$$ /$$$$$$$   /$$$$$$  /$$$$$$/$$$$  /$$  /$$$$$$$\n");
                printf("| $$  | $$| $$  | $$| $$__  $$ |____  $$| $$_  $$_  $$| $$ /$$_____/\n");
                printf("| $$  | $$| $$  | $$| $$  \\ $$  /$$$$$$$| $$ \\ $$ \\ $$| $$|  $$$$$$ \n");
                printf("| $$  | $$| $$  | $$| $$  | $$ /$$__  $$| $$ | $$ | $$| $$ \\____  $$\n");
                printf("| $$$$$$$/|  $$$$$$/| $$  | $$|  $$$$$$$| $$ | $$ | $$| $$ /$$$$$$$/\n");
                printf("|_______/  \\______/ |__/  |__/ \\_______/|__/ |__/ |__/|__/|_______/ \n");
                printf("\n===================================================================\n");
                printf("\n\t\tVersion 1.0.0.1     -     Alpha Version 1");
                printf("\n\nNote From The Developer: Console highlighting is currently disabled due to windows incompatibility\n\n");
        while (interactive)
        {
           // char* str = hermes_get_stdin("\t\033[0;35m >> ");
            char* str = hermes_get_stdin("\t >> ");

            lexer = init_hermes_lexer(str);

            parser = init_hermes_parser(lexer);
            node = hermes_parser_parse(parser, (void*) 0);
            runtime_visit(runtime, node);
        }

        hermes_cleanup(lexer, parser, runtime, node);

        //printf("\n\033[0;31m---- * Interactive Shell Terminated. * ----\033[0m\n");
        printf("\n---- * Interactive Shell Terminated. * ----\n");

        return 0;
    }
   if (strcmp(argv[1], "git")==0)
   {
       printf("\nhttps://github.com/TechPenguineer/Dunamis\n");
   }
    if (strcmp(argv[1], "template")==0)
   {
       FILE* f = fopen("index.dun", "rw");
       fputc(f, "### This is a template generated by the Dunamis CLI Development team\n\nfx main(this)\n{\tcout(\"Hello World\"\n}\n\n###To run this file you can do duna compile ./main.dun");
   }
   
   if(strcmp(argv[1],"version")==0 || strcmp(argv[1], "-v")==0)
   {
       printf("\n\tDunamis\n==========================\nCurrent version is 1.0.0.1\nAlpha version 1\nPublisher: TechPenguineer\nReleased: 9/10/2021\n");
   }
   if(strcmp(argv[1],"compile")==0)
   {
        lexer = init_hermes_lexer(hermes_read_file(argv[2]));
        parser = init_hermes_parser(lexer);
        node = hermes_parser_parse(parser, (void*) 0);
        runtime_visit(runtime, node);

        hermes_cleanup(lexer, parser, runtime, node);


        return 0;
    }
}
