#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "ast_node.h"

ASTNode* create_node(const char* type, int num_children, ...) {
    ASTNode* node = (ASTNode*)malloc(sizeof(ASTNode));
    if (!node) {
        fprintf(stderr, "Erro: Falha ao alocar memória para novo nó da AST.\n");
        exit(EXIT_FAILURE);
    }

    node->type = strdup(type);
    node->value = NULL;
    node->num_children = num_children;

    node->children = (ASTNode**)malloc(num_children * sizeof(ASTNode*));
    if (!node->children) {
        fprintf(stderr, "Erro: Falha ao alocar memória para filhos do nó.\n");
        free(node);
        exit(EXIT_FAILURE);
    }

    va_list args;
    va_start(args, num_children);
    for (int i = 0; i < num_children; ++i) {
        node->children[i] = va_arg(args, ASTNode*);
    }
    va_end(args);

    return node;
}

struct ASTNode* create_leaf(const char* type, const char* value) {
    struct ASTNode* node = malloc(sizeof(struct ASTNode));
    if (!node) {
        fprintf(stderr, "Erro: Falha ao alocar memória para o nó folha.\n");
        exit(EXIT_FAILURE);
    }
    node->type = strdup(type);
    node->value = (value != NULL ? strdup(value) : NULL);
    node->num_children = 0;
    node->children = NULL;
    return node;
}

struct ASTNode* create_leaf_int(const char* type, int value) {
    struct ASTNode* node = malloc(sizeof(struct ASTNode));
    if (!node) {
        fprintf(stderr, "Erro: Falha ao alocar memória para o nó folha.\n");
        exit(EXIT_FAILURE);
    }
    char* value_str = malloc(20);
    sprintf(value_str, "%d", value);
    node->type = strdup(type);
    node->value = value_str;
    node->num_children = 0;
    node->children = NULL;
    return node;
}

ASTNode* add_child(ASTNode* parent, ASTNode* child) {
  if(child == NULL) return parent;
   parent->children = (ASTNode**)realloc(parent->children, (parent->num_children + 1) * sizeof(ASTNode*));
    if (!parent->children) {
        fprintf(stderr, "Erro de realocação de memória ao adicionar filho\n");
        exit(EXIT_FAILURE);
    }

    parent->children[parent->num_children] = child;
    parent->num_children++;
    return parent;
}

void print_ast(ASTNode* node, int depth) {
    if (!node) {
        printf("Nó vazio.\n");
        return;
    }

    for (int i = 0; i < depth; ++i) {
        printf("  "); //Indentação
    }
    printf("%s", node->type);
    if (node->value) {
        printf(": %s", node->value);
    }
    printf("\n");

    for (int i = 0; i < node->num_children; ++i) {
        if (node->children[i] != NULL) {
            print_ast(node->children[i], depth + 1);
        }
    }
}

void free_ast(ASTNode* node) {
    if (!node) return;

    if (node->type) free(node->type);
    if (node->value) { free(node->value); }

    for (int i = 0; i < node->num_children; ++i) {
        free_ast(node->children[i]);
    }
    free(node->children);
    free(node);
}