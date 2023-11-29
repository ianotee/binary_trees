#include "binary_trees.h"

/**
 * binary_tree_is_leaf -  This  is  the code  that checks   the binary  leaf.
 * @node: The node params.
 * Return: 1 if (success).
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	 /*The conditional statements */
	if (node == NULL || node->left != NULL || node->right != NULL)
		return 0;
	/*The else.*/
	else
		return 1;
}
