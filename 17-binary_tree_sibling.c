#include "binary_trees.h"

/*
 *binary_tree_sibling -Looks for a node.
 *@node:A pointer.
 *Return:Pointer if node.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    return (node && node->parent) ? (node == node->parent->left ? node->parent->right : node->parent->left) : NULL;
}
