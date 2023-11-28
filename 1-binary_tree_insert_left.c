#include "binary_trees.h"

/**
 * binary_tree_insert_left - This is  the binary tree that inserts  a node to the left.
 * @parent: The pointer that inserts the child.
 * @value: This is the value param of the structure.
 * Description -This is the  full descriptions od the node.
 * Return:a newly created node and or just give null if not found.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    if (!parent)
        return NULL;

    binary_tree_t *new = malloc(sizeof(binary_tree_t));
    if (!new)
        return NULL;

    *new = (binary_tree_t){.n = value, .parent = parent, .right = NULL, .left = parent->left};
    parent->left = new;
    if (new->left)
        new->left->parent = new;
    return new;
}
