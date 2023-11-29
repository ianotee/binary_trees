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
	binary_tree_t *Todo;
	 /*This is is the conditional statement*/
	if (!parent)
		return (NULL);
	/*This is the malloc function for allocating memory.*/
	Todo = malloc(sizeof(binary_tree_t));
	if (!Todo)
		return (NULL);
	/*The pointers of the parent node*/
	Todo->n = value;
	Todo->parent = parent;
	Todo->left = NULL;
	Todo->right = parent->right;
	parent->right = Todo;

	/*Conditional statement.*/
	if (Todo->right)
		Todo->right->parent = Todo;
	return (Todo);
}
