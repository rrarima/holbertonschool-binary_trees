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
