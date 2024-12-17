%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ast_node.h"  // Para garantir que o tipo ASTNode esteja disponível
#include "parser.tab.h"  // Arquivo gerado pelo Bison

/* Definição da estrutura para a tabela de símbolos */
typedef struct Symbol {
    char lexeme[100];
    char token_name[50];
    char attribute[50];
    struct Symbol* next;
} Symbol;

/* Cabeça da tabela de símbolos (lista encadeada) */
Symbol* symbol_table = NULL;

/* Variável global para controlar se há erro */
int has_error = 0;

/* Contador de linha */
int line_number = 1;

/* Função para inserir uma nova entrada na tabela de símbolos */
void insert_symbol(const char* lexeme, const char* token_name, const char* attribute) {
    Symbol* new_symbol = (Symbol*)malloc(sizeof(Symbol));
    if (!new_symbol) {
        fprintf(stderr, "Erro: Falha ao alocar memória para novo símbolo.\n");
        exit(EXIT_FAILURE);
    }

    strcpy(new_symbol->lexeme, lexeme);
    strcpy(new_symbol->token_name, token_name);
    strcpy(new_symbol->attribute, attribute);
    new_symbol->next = symbol_table;
    symbol_table = new_symbol;
}

/* Função para imprimir a tabela de símbolos */
void print_symbol_table() {
    Symbol* temp = symbol_table;
    printf("\nTabela de Símbolos:\n");
    printf("%-15s %-15s %-15s\n", "Lexeme", "Token Name", "Attribute");
    printf("-------------------------------------------------------\n");
    while (temp != NULL) {
        printf("%-15s %-15s %-15s\n", temp->lexeme, temp->token_name, temp->attribute);
        temp = temp->next;
    }
}

// Externamente, informe que yylval será usado pelo parser
extern YYSTYPE yylval;
%}

%option noyywrap

else        else
if          if
int         int
return      return
void        void
while       while
simbolos + - * / = ; , ( ) [ ] { } /* */ < <= > >= == !=
letra   [a-zA-Z]
digito  [0-9]
id      {letra}({letra}|{digito})*
num     {digito}+
branco  [ \t]+

%x COMMENT
%%

if          { return IF; }
else        { return ELSE; }
int         { return INT; }
return      { return RETURN; }
void        { return VOID; }
while       { return WHILE; }

"+"         { return PLUS; }
"-"         { return MINUS; }
"*"         { return MULTIPLY; }
"/"         { return DIVIDE; }
"="         { return ASSIGN; }
";"         { return SEMICOLON; }
","         { return COMMA; }
"("         { return LPAREN; }
")"         { return RPAREN; }
"["         { return LBRACKET; }
"]"         { return RBRACKET; }
"{"         { return LBRACE; }
"}"         { return RBRACE; }

"/*"        { BEGIN(COMMENT); }
<COMMENT>"*/"        { BEGIN(INITIAL); }
<COMMENT>.		{ /* Ignorar todos os caracteres no estado COMMENT */ }
<COMMENT>\n		{ line_number++; }
<COMMENT><<EOF>> {
    fprintf(stderr, "Erro: Comentário não fechado iniciado na linha %d.\n", line_number);
    exit(EXIT_FAILURE);
}

"<="        { return LE; }
">="        { return GE; }
"=="        { return EQ; }
"!="        { return NEQ; }
"<"         { return LT; }
">"         { return GT; }

{id}        {
                yylval.strval = strdup(yytext);
                return ID;
            }
{num}       {
                yylval.intval = atoi(yytext);
                return NUM;
            }

\n          { line_number++; }

{branco}    { /* Ignorar espaços */ }

.           { 
                has_error = 1; 
                printf("Erro: símbolo não reconhecido na linha %d: '%s'\n", line_number, yytext);
                return yytext[0];
            }

%%
