#include "binary_trees.h"

/**
 * binary_tree_is_leaf -  This  is  the code  that checks   the binary  leaf.
 * @node: The node params.
 * Return: 1 if (success).
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	 /*The conditions*/
	return ((!node || node->left || node->right) ? 0 : 1);
}
