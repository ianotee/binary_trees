#include "binary_trees.h"

/*
*binary_tree_height - Takes the height.
*@tree:This is the Pointer to the root.
*Return: 0 if (not successful).
*/

size_t binary_tree_height(const binary_tree_t *tree)
{	
	/*The conditional statement*/
	if (tree == NULL)
		return 0;
	/*The sizes.*/
	size_t  height_up = binary_tree_height(tree->left);
	size_t  height_down = binary_tree_height(tree->right);
	
	return (height_up > height_down ? height_up : height_down) + 1;
}
