#include "binary_trees.h"

/*
*binary_tree_is_root -Looks for the root node.
*@node: The node param.
*Return: 1 if (success)
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	 /*The conditional statement  of the node.*/
	if (node == NULL || node->parent != NULL)
		return 0;
	/*The else statement */
	else

		return 1;
} 
