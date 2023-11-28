#include "binary_trees.h"

/**
 * binary_tree_depth - The depth.
 * @tree: The pointer   to node.
 * Return: 0 if  success.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	/*The conditional statement*/
	size_t depth = 0;
	/*The while loop.*/
	while (tree && tree->parent)
	{
		tree = tree->parent;
		depth++;
	}

	return depth;
}
