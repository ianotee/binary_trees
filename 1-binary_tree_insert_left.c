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
/*The below is an if statement*/
	if (!parent)
		return (NULL);
/*This is the malloc function that gives enough space.*/
    binary_tree_t *    new = calloc(1, sizeof(binary_tree_t));
  	if (!new)
		return (NULL);
/*This is the new logic*/
	new->n = value;
	new->parent = parent;
	new->right = NULL;
	new->left = parent->left;

/*This is the  conditional statement */
	if (new->left)
		new->left->parent = new;

	parent->left = new;	
	return (new);
}
