#include "binary_trees.h"

/**
 * binary_tree_postorder -  The postorder node.
 * @tree: The pointer.
 * @func: The pointer to func.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{	/*The conditional statement.*/
	if (!tree || !func)
		return;
	/*The results of the binary node.*/
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
