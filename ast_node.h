#ifndef AST_NODE_H
#define AST_NODE_H

#include <stdarg.h>

typedef struct ASTNode {
    char* type;
    char* value;
    int num_children;
    struct ASTNode** children;
} ASTNode;

ASTNode* create_node(const char* type, int num_children, ...);

struct ASTNode* create_leaf(const char* type, const char* value);

struct ASTNode* create_leaf_int(const char* type, int value);

ASTNode* add_child(ASTNode* parent, ASTNode* child);

void free_ast(ASTNode* node);

void print_ast(ASTNode* node, int depth);

#endif 