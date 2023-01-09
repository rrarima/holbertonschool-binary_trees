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
