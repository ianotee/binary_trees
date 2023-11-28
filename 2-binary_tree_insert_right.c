#include "binary_trees.h"

/**
 * binary_tree_insert_right - This is the node for inserting.
 * @parent:The pointer to the node.
 * @value: The value of the param.
 * Description: The description  of the parent.
 * Return: new or null.			
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	 /*This is is the conditional statement*/
	if (!parent)
		return (NULL);
	/*This is the malloc function for allocating memory.*/
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	/*The pointers of the parent node*/
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = parent->right;
	parent->right = new;

	/*Conditional statement.*/
	if (new->right)
		new->right->parent = new;
	return (new);
}
