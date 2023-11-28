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
	binary_tree_t *par;
    
	/*The below is an if statement*/
	if (!parent)
		return (NULL);
	/*This is the malloc function that gives enough space.*/
	par = malloc(sizeof(binary_tree_t));
	if (!par)
		return (NULL);
	/*This is the Todo logic*/
	par->n = value;
	par->parent = parent;
	par->right = NULL;
	par->left = parent->left;
	parent->left = par;

/*This is the  conditional statement */
	if (par->left)
		par->left->parent = par;
	return (par);
}
