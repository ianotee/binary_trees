#include "binary_trees.h"

/**
 * binary_tree_insert_left - This is  the binary tree that inserts  a node to the left.
 * @parent: The pointer that inserts the child.
 * @value: This is the value param of the structure.
 * Description -This is the  full descriptions od the node.
 * Return:a newly created node and or just give null if not found.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *begin_node;
    
	/*The below is an if statement*/
	if (!parent)
		return (NULL);
	/*This is the malloc function that gives enough space.*/
	begin_node = malloc(sizeof(binary_tree_t));
	if (!begin_node)
		return (NULL);
	/*This is the begin_node logic*/
	begin_node->n = value;
	begin_node->parent = parent;
	begin_node->right = NULL;
	begin_node->left = parent->left;
	parent->left = begin_node;

/*This is the  conditional statement */
	if (begin_node->left)
		begin_node->left->parent = begin_node;
	return (begin_node);
}
