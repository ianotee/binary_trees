#include "binary_trees.h"

/**
 * binary_tree_insert_right - This is the node for inserting.
 * @parent:The pointer to the node.
 * @value: The value of the param.
 * Description: The description  of the parent.
 * Return: new or null.			
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *begin_node;

	/*The pointers of the parent node*/
	begin_node->left = NULL;
	begin_node->right = NULL;
	begin_node->n = value;

        /*This is is the conditional statement*/
	if (parent == NULL)
		return (NULL);
        /*This is the malloc function for allocating memory.*/
	new_node = malloc(sizeof(binary_tree_t));
	if (begin_node == NULL)
		return (NULL);
	/*Conditional statement.*/
	if (parent->left == NULL)
	{
		parent->left = begin_node;
		begin_node->parent = parent;
	}
	else
	{
		begin_node->left = parent->left;
		parent->left = begin_node;
		begin_node->left->parent = begin_node;
		begin_node->parent = parent;
	}
	return (begin_node);
}
