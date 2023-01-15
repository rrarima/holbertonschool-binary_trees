#include "binary_trees.h"

/**
  * binary_tree_depth - function that measures the depth of a node
  *			in a binary tree
  *
  * @tree: pointer to the node to measure the depth
  * Return: Depth of tree or 0 if tree is NULL
  */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t i = 0;

	if (tree == NULL)
	{
		return (i);
	}
	while (tree->parent != NULL)
	{
		i = i + 1;
		tree = tree->parent;
	}
	return (i);
}

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 *
 *
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor node or NULL otherwise
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	size_t first_depth, second_depth;

	if (first == NULL || second == NULL)
	{
		return (NULL);
	}

	first_depth = binary_tree_depth(first);
	second_depth = binary_tree_depth(second);

	while (first_depth > second_depth)
	{
		first = first->parent;
		first_depth = first_depth - 1;
	}
	while (second_depth > first_depth)
	{
		second = second->parent;
		second_depth = second_depth - 1;
	}
	while (first != NULL && second != NULL)
	{
		if (first == second)
		{
			return ((binary_tree_t *)first);
		}
		first = first->parent;
		second = second->parent;
	}
	return ((binary_tree_t *)first);
}
