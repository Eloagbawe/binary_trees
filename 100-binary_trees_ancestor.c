#include "binary_trees.h"
/**
 * search_ancestor - searches for a common ancestor of two nodes
 * @first: first node
 * @second: second_node
 * Return: pointer to ancestor found or NULL if none is found
*/
binary_tree_t *search_ancestor(const binary_tree_t *first,
	const binary_tree_t *second)
{
	if (second == NULL)
		return (NULL);
	else if (first == second->parent)
		return (second->parent);
	else if (first->parent == second)
		return (first->parent);
	else if (first->parent == second->parent)
		return (first->parent);
	else
		return (search_ancestor(first, second->parent));
}
/**
 * binary_trees_ancestor -  lowest common ancestor of two nodes
 * @first: pointer to first node
 * @second: pointer to second node
 * Return: pointer to the lowest common ancestor node of the two given nodes
 * or NULL if no ancestor found
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	const binary_tree_t *second)
{
	binary_tree_t *ancestor_first, *ancestor_second;

	if (first == NULL || second == NULL)
		return (NULL);
	ancestor_first = search_ancestor(first, second);
	ancestor_second = search_ancestor(second, first);

	if (ancestor_first != NULL)
		return (ancestor_first);
	else if (ancestor_second != NULL)
		return (ancestor_second);
	else
		return (NULL);
}
