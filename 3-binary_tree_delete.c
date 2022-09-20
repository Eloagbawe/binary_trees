#include "binary_trees.h"
/**
 * binary_tree_delete - deletes a binary tree
 * @tree: pointer to the root node of the tree to delete
 * Return: void
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		tree = NULL;
		free(tree);
	}
}
