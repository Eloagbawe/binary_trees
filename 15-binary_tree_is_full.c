#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of leaves
 * Return: number of leaves or 0 if tree is NULL
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int left_leaves, right_leaves;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL || tree->right == NULL)
		return (1);
	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);
	return (right_leaves + left_leaves);
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if tree is full and 0 if tree is not
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	 int left_leaves, right_leaves;

	if (tree == NULL)
		return (0);
	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);
	if ((left_leaves % 2) != (right_leaves % 2))
		return (0);
	else
		return (1);
}
