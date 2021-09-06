#include <stdio.h>
#include <string.h>
#include "include/lexer.h"
#include "include/parser.h"
#include "include/visitor.h"
#include "include/io.h"

#define MAX_LIMIT 20
void print_help()
{
    printf("Usage:\n\tduna [file_name].das\n");
    exit(1);
}

int main(int argc, char* argv[])
{
    if (argc >= 2){
        for(int i = 1; i < argc; i++){
            int len = strlen(argv[i]);
            char* last_four = &argv[i][len-4];
            if(strcmp(last_four,".das") == 0){
                                lexer_T* lexer = init_lexer(
                    get_file_contents(argv[i])
                );
                parser_T* parser = init_parser(lexer);
                AST_T* root = parser_parse(parser, parser->scope);
                visitor_T* visitor = init_visitor();
                visitor_visit(visitor, root);
            }

            else {
                print_help();
            }
        }
    }
    else {
        char input[MAX_LIMIT];
        int index = 1;
 
        
        while(1){
            if (index==1)
            {   
                printf("\e[1;31m /$$$$$$$                                              /$$          \n");
                printf("| $$__  $$                                            |__/          \n");
                printf("| $$  \\ $$ /$$   /$$ /$$$$$$$   /$$$$$$  /$$$$$$/$$$$  /$$  /$$$$$$$\n");
                printf("| $$  | $$| $$  | $$| $$__  $$ |____  $$| $$_  $$_  $$| $$ /$$_____/\n");
                printf("| $$  | $$| $$  | $$| $$  \\ $$  /$$$$$$$| $$ \\ $$ \\ $$| $$|  $$$$$$ \n");
                printf("| $$  | $$| $$  | $$| $$  | $$ /$$__  $$| $$ | $$ | $$| $$ \\____  $$\n");
                printf("| $$$$$$$/|  $$$$$$/| $$  | $$|  $$$$$$$| $$ | $$ | $$| $$ /$$$$$$$/\n");
                printf("|_______/  \\______/ |__/  |__/ \\_______/|__/ |__/ |__/|__/|_______/ \n");
                printf("\e[1;31m\n===================================================================\n");
                printf("\n\e[1;36m\t\tVersion 0.0.1     -     Alpha Version 1\n\e[0m");
                
                index=0;
            }
            printf("\n\e[0;35m>>>\e[0m  ");
            fgets(input,MAX_LIMIT, stdin);
            lexer_T* lexer = init_lexer(input);
            parser_T* parser = init_parser(lexer);
            AST_T* root = parser_parse(parser, parser->scope);
            visitor_T* visitor = init_visitor();
            visitor_visit(visitor, root);
        
        }
    }
    return 0;
}
