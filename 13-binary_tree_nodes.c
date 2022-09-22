#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes counted or 0 if tree is NULL
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int right_nodes, left_nodes;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (0);
	right_nodes = binary_tree_nodes(tree->right);
	left_nodes = binary_tree_nodes(tree->left);
	return (right_nodes + left_nodes + 1);
}
