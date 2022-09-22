#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: pointer to the uncle or NULL if not found
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *right_uncle, *left_uncle;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	right_uncle = node->parent->parent->right;
	left_uncle = node->parent->parent->left;

	if (node->parent == right_uncle && left_uncle != NULL)
		return (left_uncle);
	if (node->parent == left_uncle && right_uncle != NULL)
		return (right_uncle);
	return (NULL);
}
