#include "binary_trees.h"
/**
 * count_height - counts the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of a tree or 0 if tree is NULL
*/
size_t count_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = count_height(tree->left);
	right_height = count_height(tree->right);
	if (left_height >= right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
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
 * binary_tree_is_perfect -  checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if ttree is perfect and 0 if tree is not
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t right_height, left_height, right_leaves, left_leaves;

	if (tree == NULL)
		return (0);
	left_height = count_height(tree->left);
	right_height = count_height(tree->right);
	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);

	if ((left_height == right_height) && (left_leaves == right_leaves))
		return (1);
	else
		return (0);
}
