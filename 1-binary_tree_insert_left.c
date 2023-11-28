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
	binary_tree_t *Todo;

	if (!parent)
		return (NULL);

	Todo = malloc(sizeof(binary_tree_t));
	if (!Todo)
		return (NULL);

	Todo->n = value;
	Todo->parent = parent;
	Todo->right = NULL;
	Todo->left = parent->left;
	parent->left = Todo;
	if (Todo->left)
		Todo->left->parent = Todo;
	return (Todo);
}
