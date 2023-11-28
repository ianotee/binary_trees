#include "binary_trees.h"

/**
 * btheight - measures.
 * @tree: The Pointer.
 * Return: 0 if  (NULL).
 */

size_t btheight(const binary_tree_t *tree)
{
	if (!tree)
		return 0;

	
	size_t height_up = btheight(tree->left);
	size_t height_down = btheight(tree->right);



	/*
	*Change the return.
	*Difference.
	*height count of the function.	
	*/

	if (!tree->left && !tree->right)
		return 1;

	return (height_up > height_down) ? (height_up + 1) : (height_down + 1);
}


	/*
	*binary_tree_balance -Measure the balance.
	*@tree :The Pointer to the root.
	*Return: if (NULL).
	*/

int binary_tree_balance(const binary_tree_t *tree)

{
	if (!tree)
		return 0;

	int rock_1 = btheight(tree->left);
	int rock_2 =btheight(tree->right);

	return (rock_1 - rock_2);
}
