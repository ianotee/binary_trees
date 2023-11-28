#include "binary_trees.h"

/**
 * binary_tree_preorder -   The binary true.
 * @tree: The pointer to  the root.
 * @func: The funct param.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/*This is the binary order and conditional*/
	if (!tree || !func)
		return;
	func(tree->n);
	/*The order tree.*/
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

