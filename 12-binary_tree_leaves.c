#include "binary_trees.h"

/**
 * binary_tree_leaves - This is used to count the branches
 * @tree: pointer.
 * Return: 0 if (NULL).
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{

	/*The size  of the branch.*/
	size_t  branch_1, branch_2;

	if (!tree)
		return (0);
	/*The binary leaves*/
	branch_1 = binary_tree_leaves(tree->left);
	branch_2 = binary_tree_leaves(tree->right);

	/*The conditional  statement */
	if (!tree->right && !tree->left)
		return (branch_1 + branch_2 + 1);
	else
		return (branch_1 + branch_2 + 0);
}
