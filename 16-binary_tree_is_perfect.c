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
  * binary_tree_height - measures height of a binary tree
  *
  *
  * @tree: pointer to tree that will be measured
  * Return: height of binary tree
  */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL || binary_tree_is_leaf(tree) == 1)
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
  * binary_tree_is_perfect - check if binary tree is perfect
  *
  * @tree: pointer to root node of tree
  * Return: 1 if perfect, 0 otherwise. 0 if tree is NULL
  */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *left, *right;

	if (tree == NULL)
	{
		return (0);
	}
	left = tree->left;
	right = tree->right;

	if (binary_tree_is_leaf(tree) == 1)
	{
		return (1);
	}
	if (left == NULL || right == NULL)
	{
		return (0);
	}
	if (binary_tree_height(left) == binary_tree_height(right))
	{
		if (binary_tree_is_perfect(left) == 1 &&
				binary_tree_is_perfect(right) == 1)
		{
			return (1);
		}
	}

	return (0);
}
