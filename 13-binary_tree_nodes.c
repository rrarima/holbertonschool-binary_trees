#include "binary_trees.h"

/**
  * binary_tree_is_leaf - check is if node is a leaf
  *
  * @node: pointer to node
  *
  * Return: 1 if node is leaf, otherwise 0
  */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	return (0);
}

/**
  * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
  *
  *
  * @tree: pointer to the root node of the binary tree
  * Return: number of nodes within a child node, 0 otherwise
  */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || binary_tree_is_leaf(tree) == 1)
	{
		return (0);
	}
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
