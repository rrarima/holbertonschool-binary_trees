#include "binary_trees.h"

/**
  * binary_tree_insert_left - inserts a new left node in a binary tree
  *
  *
  * @parent: pointer to parent node
  * @value: value to input from main
  * Return: Binary tree node
  */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
	{
		return (NULL);
	}
	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->left = parent->left;
	if (newNode->left != NULL)
	{
		newNode->left->parent = newNode;
	}
	parent->left = newNode;
	return (newNode);
}
