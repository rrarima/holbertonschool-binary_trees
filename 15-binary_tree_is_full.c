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
  * binary_tree_is_full - checks if parent nodes have a left and right child
  *
  *
  * @tree: pointer to root node of binary tree
  * Return: 1 if binary tree is full, 0 otherwise
  */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (binary_tree_is_leaf(tree) == 1)
	{
		return (1);
	}
	if (tree->left != NULL && tree->right != NULL)
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}
	return (0);
}
