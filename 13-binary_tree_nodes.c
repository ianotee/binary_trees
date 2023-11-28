#include "binary_trees.h"

/**
 * binary_tree_nodes - The binary  node.
 * @tree: The Pointer  of tree.
 * Return: 0 if (NULL).
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/*The size */
	size_t branch_1,branch_2;

	/*The conditional statement*/
	if (!tree)
		return (0);
	/*The binary tree node*/
	branch_1 = binary_tree_nodes(tree->left);
	branch_2 = binary_tree_nodes(tree->right);
	/*The conditional statement*/
	if (!tree->right && !tree->left)
		return (branch_1 + branch_2 + 0);
	else
		return (branch_1 + branch_2 + 1);
}
