#ifndef HERMES_PARSER_H
#define HERMES_PARSER_H
#include "hermes_lexer.h"
#include "AST.h"
#include "token.h"
#include "hermes_scope.h"


typedef struct HERMES_PARSER_STRUCT
{
    hermes_lexer_T* hermes_lexer;
    token_T* prev_token;
    token_T* current_token;
    data_type_T* data_type;
} hermes_parser_T;

hermes_parser_T* init_hermes_parser(hermes_lexer_T* hermes_lexer);

// etc

void hermes_parser_type_error(hermes_parser_T* hermes_parser);

void hermes_parser_syntax_error(hermes_parser_T* hermes_parser);

void hermes_parser_unexpected_token(hermes_parser_T* hermes_parser, int token_type);

AST_T* hermes_parser_parse(hermes_parser_T* hermes_parser, hermes_scope_T* scope);

AST_T* hermes_parser_eat(hermes_parser_T* hermes_parser, int token_type);

AST_T* hermes_parser_parse_statement(hermes_parser_T* hermes_parser, hermes_scope_T* scope);

AST_T* hermes_parser_parse_statements(hermes_parser_T* hermes_parser, hermes_scope_T* scope);

AST_T* hermes_parser_parse_type(hermes_parser_T* hermes_parser, hermes_scope_T* scope);

// values

AST_T* hermes_parser_parse_float(hermes_parser_T* hermes_parser, hermes_scope_T* scope);

AST_T* hermes_parser_parse_string(hermes_parser_T* hermes_parser, hermes_scope_T* scope);

AST_T* hermes_parser_parse_char(hermes_parser_T* hermes_parser, hermes_scope_T* scope);

AST_T* hermes_parser_parse_integer(hermes_parser_T* hermes_parser, hermes_scope_T* scope);

AST_T* hermes_parser_parse_boolean(hermes_parser_T* hermes_parser, hermes_scope_T* scope);

AST_T* hermes_parser_parse_null(hermes_parser_T* hermes_parser, hermes_scope_T* scope);

AST_T* hermes_parser_parse_variable(hermes_parser_T* hermes_parser, hermes_scope_T* scope);

AST_T* hermes_parser_parse_object(hermes_parser_T* hermes_parser, hermes_scope_T* scope);

AST_T* hermes_parser_parse_enum(hermes_parser_T* hermes_parser, hermes_scope_T* scope);

AST_T* hermes_parser_parse_list(hermes_parser_T* hermes_parser, hermes_scope_T* scope);

// math

AST_T* hermes_parser_parse_factor(hermes_parser_T* hermes_parser, hermes_scope_T* scope);

AST_T* hermes_parser_parse_term(hermes_parser_T* hermes_parser, hermes_scope_T* scope);

AST_T* hermes_parser_parse_expr(hermes_parser_T* hermes_parser, hermes_scope_T* scope);

// statements

AST_T* hermes_parser_parse_break(hermes_parser_T* hermes_parser, hermes_scope_T* scope);

AST_T* hermes_parser_parse_continue(hermes_parser_T* hermes_parser, hermes_scope_T* scope);

AST_T* hermes_parser_parse_return(hermes_parser_T* hermes_parser, hermes_scope_T* scope);

AST_T* hermes_parser_parse_if(hermes_parser_T* hermes_parser, hermes_scope_T* scope);

AST_T* hermes_parser_parse_ternary(hermes_parser_T* hermes_parser, hermes_scope_T* scope, AST_T* expr);

AST_T* hermes_parser_parse_new(hermes_parser_T* hermes_parser, hermes_scope_T* scope);

AST_T* hermes_parser_parse_iterate(hermes_parser_T* hermes_parser, hermes_scope_T* scope);

AST_T* hermes_parser_parse_assert(hermes_parser_T* hermes_parser, hermes_scope_T* scope);

// loops

AST_T* hermes_parser_parse_while(hermes_parser_T* hermes_parser, hermes_scope_T* scope);

AST_T* hermes_parser_parse_for(hermes_parser_T* hermes_parser, hermes_scope_T* scope);

// functions

AST_T* hermes_parser_parse_function_call(hermes_parser_T* hermes_parser, hermes_scope_T* scope, AST_T* expr);

AST_T* hermes_parser_parse_function_definition(hermes_parser_T* hermes_parser, hermes_scope_T* scope);

#endif
