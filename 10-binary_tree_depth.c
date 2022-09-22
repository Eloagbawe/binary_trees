#include "binary_trees.h"
/**
 * count_depth - counts the depth of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of a tree or 0 if tree is NULL
*/
size_t count_depth(const binary_tree_t *tree)
{
	int depth;

	if (tree == NULL)
		return (0);
	depth = count_depth(tree->parent);
	return (depth + 1);
}
/**
 * binary_tree_depth - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of tree or 0 if tree is NULL
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (count_depth(tree) - 1);
}
