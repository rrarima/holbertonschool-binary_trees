#include "binary_trees.h"
/**
  * binary_tree_height - measures height of a binary tree
  *
  *
  * @tree: pointer to tree that will be measured
  * Return: height of binary tree
  */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height >= right_height)
	{
		return (left_height + 1);
	}
	return (right_height + 1);
}

/**
  * binary_tree_balance - measure  balance factor of a binary tree
  *
  * @tree: pointer to root node of tree
  * Return: balance gactor of binary tree
  */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
