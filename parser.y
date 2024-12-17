%{
#define YYDEBUG 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast_node.h"

extern int yylex();
extern int yyparse();
extern FILE* yyin;
extern int line_number;
extern int has_error;
extern char* yytext;

void yyerror(const char* msg);


%}

%union {
    int intval;
    char* strval;
    struct ASTNode* node;
}

%token <strval> ID
%token <intval> NUM
%token IF ELSE INT RETURN VOID WHILE
%token PLUS MINUS MULTIPLY DIVIDE ASSIGN SEMICOLON COMMA
%token LPAREN RPAREN LBRACKET RBRACKET LBRACE RBRACE
%token LE GE EQ NEQ LT GT

%type <node> program declaration_list declaration type_specifier
%type <node> var_declaration fun_declaration params param_list param
%type <node> compound_stmt local_declarations statement_list statement
%type <node> expression_stmt selection_stmt iteration_stmt return_stmt
%type <node> expression var simple_expression relop additive_expression
%type <node> term factor call args arg_list

%start program

%%

program: declaration_list {
    ASTNode* yyresult = $1;
    $$ = yyresult;
    if (yyresult) {
        printf("Árvore Sintática Abstrata (AST):\n");
        print_ast(yyresult, 0);
        free_ast(yyresult); // Libera a memória após imprimir a AST
    } else {
        if (!has_error) {
            printf("Nenhuma AST foi gerada.\n");
        } else {
            printf("Erro ao gerar AST.\n");
        }

    }
}
;

declaration_list: declaration_list declaration {
    if ($1 && $2) {
        $$ = add_child($1, $2);
    } else if($1) {
        $$ = $1;
    } else {
        $$ = $2;
    }
}
| declaration {
    $$ = $1;
}
;

declaration: var_declaration | fun_declaration
;

var_declaration: type_specifier ID SEMICOLON {
    $$ = create_node("var_declaration", 2, $1, create_leaf("ID", $2));
} 
| type_specifier ID ASSIGN expression SEMICOLON {
    $$ = create_node("var_init", 3, $1, create_leaf("ID", $2), $4);
} 
| type_specifier ID LBRACKET NUM RBRACKET SEMICOLON {
    $$ = create_node("array_declaration", 3, $1, create_leaf("ID", $2), create_leaf_int("NUM", $4));
}
;

type_specifier: INT {
    $$ = create_leaf("type", "int");
} | VOID {
    $$ = create_leaf("type", "void");
}
;

fun_declaration: type_specifier ID LPAREN params RPAREN compound_stmt {
    $$ = create_node("fun_declaration", 3, $1, create_leaf("ID", $2), $6);
}
;

params: param_list | VOID {
    $$ = create_leaf("params", "void");
}
;

param_list: param_list COMMA param {
    if ($1 && $3) {
        $$ = add_child($1, $3);
    } else if ($1) {
        $$ = $1;
    } else {
        $$ = $3;
    }
}
| param {
    $$ = $1;
}
;

param: type_specifier ID {
    $$ = create_node("param", 2, $1, create_leaf("ID", $2));
} | type_specifier ID LBRACKET RBRACKET {
    $$ = create_node("array_param", 2, $1, create_leaf("ID", $2));
}
;

compound_stmt: LBRACE local_declarations statement_list RBRACE {
     if ($2 && $3) {
        $$ = create_node("compound_stmt", 2, $2, $3);
    } else if ($2) {
        $$ = create_node("compound_stmt", 1, $2);
    } else {
        $$ = create_node("compound_stmt", 1, $3);
    }
}
;

local_declarations: local_declarations var_declaration {
    if ($1 && $2) {
        $$ = add_child($1, $2);
    } else {
        $$ = $2;
    }
}
| /* vazio */ {
    $$ = NULL;
}
;

statement_list: statement_list statement {
     if ($1 && $2) {
        $$ = add_child($1, $2);
    } else {
        $$ = $2;
    }
}
| /* vazio */ {
    $$ = NULL;
}
;

statement: expression_stmt 
    | compound_stmt 
    | selection_stmt 
    | iteration_stmt 
    | return_stmt
;

expression_stmt: expression SEMICOLON {
    $$ = $1;
} | SEMICOLON {
    $$ = NULL;
}
;

selection_stmt: IF LPAREN expression RPAREN statement ELSE statement {
    $$ = create_node("if_else", 3, $3, $5, $7);
} | IF LPAREN expression RPAREN statement {
    $$ = create_node("if", 2, $3, $5);
}
;

iteration_stmt: WHILE LPAREN expression RPAREN statement {
    $$ = create_node("while", 2, $3, $5);
}
;

return_stmt: RETURN SEMICOLON {
    $$ = create_node("return", 0);
} | RETURN expression SEMICOLON {
    $$ = create_node("return", 1, $2);
}
;

expression: var ASSIGN expression {
            $$ = create_node("assign", 2, $1, $3);
        }
        | simple_expression {
            $$ = $1;
        }
        | call {
            $$ = $1;
        }
;

var: ID {
    $$ = create_leaf("ID", strdup($1));
} | ID LBRACKET expression RBRACKET {
    $$ = create_node("array_access", 2, create_leaf("ID", $1), $3);
}
;

simple_expression: additive_expression relop additive_expression {
    $$ = create_node("relop", 2, $2, $3);
} | additive_expression {
    $$ = $1;
}
;

relop: LE {
    $$ = create_leaf("relop", "<=");
} | GE {
    $$ = create_leaf("relop", ">=");
} | EQ {
    $$ = create_leaf("relop", "==");
} | NEQ {
    $$ = create_leaf("relop", "!=");
} | LT {
    $$ = create_leaf("relop", "<");
} | GT {
    $$ = create_leaf("relop", ">");
}
;

additive_expression: additive_expression PLUS term {
    $$ = create_node("add", 2, $1, $3);
} | additive_expression MINUS term {
    $$ = create_node("sub", 2, $1, $3);
} | term {
    $$ = $1;
}
;

term: term MULTIPLY factor {
    $$ = create_node("mul", 2, $1, $3);
} | term DIVIDE factor {
    $$ = create_node("div", 2, $1, $3);
} | factor {
    $$ = $1;
}
;

factor: LPAREN expression RPAREN {
    $$ = $2;
} | var {
    $$ = $1;
} | NUM {
    $$ = create_leaf_int("NUM", $1);
}
;

call: ID LPAREN args RPAREN {
       $$ = create_node("call", 2, create_leaf("ID", $1), $3);
   }
;

args: arg_list
    | /* vazio */ {
        $$ = NULL;
    }
;

arg_list: arg_list COMMA expression {
        if ($1 && $3) {
            $$ = add_child($1, $3);
        } else if($1) {
            $$ = $1;
        } else {
            $$ = $3;
        }
    }
    | expression {
        $$ = create_node("arg_list", 1, $1);
    }
;

%%

void yyerror(const char* msg) {
  fprintf(stderr, "Erro na linha %d: %s, token: %s\n", line_number, msg, yytext);
  has_error = 1;
}