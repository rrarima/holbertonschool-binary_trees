#include "binary_trees.h"

/**
  * binary_tree_insert_right - function to insert node as the right-child
  *				of another node
  *
  * @parent: pointer to parent node
  * @value: value to input from main
  * Return: Insert right node
  */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	newNode->right = parent->right;
	if (parent->right != NULL)
	{
		parent->right->parent = newNode;
	}
	parent->right = newNode;
	return (newNode);
}

