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
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of tree or 0 if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (count_height(tree) - 1);
}
