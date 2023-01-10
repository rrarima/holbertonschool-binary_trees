#include "binary_trees.h"

/**
  * binary_tree_is_leaf - check is if node is a leaf
  *
  * @node: pointer to node
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
  * binary_tree_leaves - counts number of leaves on binary tree
  *
  * @tree: pointer to root node of tree
  * Return: number of leaves in the binary tree
  */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (binary_tree_is_leaf(tree) == 1)
	{
		return (1);
	}
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
