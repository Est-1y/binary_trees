#include "binary_trees.h"

/**
 * binary_tree_sibling - searchfor the sibling of a node
 * @node: Points to the node
 * Return: Pointer (sibling node), or NULL (no sibling)
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
		node->parent->left == NULL || node->parent->right == NULL)
	{
		return (NULL);
	}

	if (node->parent->left->n == node->n)
	{
		return (node->parent->right);
	}
	else if (node->parent->right->n == node->n)
	{
		return (node->parent->left);
	}

	return (NULL);
}
