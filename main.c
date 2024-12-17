#include <stdio.h>
#include <stdlib.h>
#include "parser.tab.h"
#include "ast_node.h"

extern FILE* yyin;
extern int yyparse();
extern int has_error;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Uso: %s <arquivo_fonte>\n", argv[0]);
        return EXIT_FAILURE;
    }

    FILE* source = fopen(argv[1], "r");
    if (!source) {
        perror("Erro ao abrir arquivo");
        return EXIT_FAILURE;
    }

    yyin = source;
    has_error = 0;

    if (yyparse() == 0 && !has_error) {
        printf("Análise concluída com sucesso.\n");
    } else {
        printf("Ocorreram erros durante a análise.\n");
    }

    fclose(source);

    return EXIT_SUCCESS;
}