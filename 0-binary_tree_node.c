#include "binary_trees.h"

/**
 * binary_tree_node - This is the the binary_tree node.
 * @parent: The is the node to the parent.
 * @value: This is the value to the node.
 * Return: new if success or null.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *begin_node;

	begin_node = malloc(sizeof(binary_tree_t));

	/*This is the conditional statement of this node*/
	if (begin_node == NULL)
		return (NULL);

	if (parent == NULL)
	{
		parent = begin_node;
		begin_node->parent = NULL;
	}
	else
	{
		begin_node->parent = parent;
	}
	/*The node values.*/
	begin_node->n = value;
	begin_node->left = NULL;
	begin_node->right = NULL;

	return (begin_node);
}

