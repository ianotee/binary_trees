#include  "binary_trees.h"

/*
*binary_trees_delete -This deletes  node.
*@tree: Pointer to node.
*/


void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	/* This traversal*/

	while (tree)

	{
		/*Traversal to the left*/
		if (tree -> left)
		{
			tree = tree->left;
		}

		/*Traversal to the right*/
		else if (tree ->  right)
		{
			tree = tree->right;
		}
		/*Delete  the current  node.*/

		else
		{
			/* Save  parent  and the  current node*/
			binary_tree_t *parent = tree ->parent;
			binary_tree_t *current = tree;

			/*Updates the parent*/ 
			if (parent)
			{
				if (parent ->left == tree)
					parent -> left = NULL;
				else
					parent->right = NULL;
			}

			/*This is the current  node */
			tree = parent;
			free(current);
		}
		}
	}
	
