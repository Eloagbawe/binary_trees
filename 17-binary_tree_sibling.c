#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: pointer to the sibling or NULL if not found
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *right_child, *left_child;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	right_child = node->parent->right;
	left_child = node->parent->left;

	if (node == right_child && left_child != NULL)
		return (left_child);
	if (node == left_child && right_child != NULL)
		return (right_child);
	return (NULL);
}
