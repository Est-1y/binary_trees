#include "binary_trees.h"

/**
 * binary_tree_size - calculates the size of a binary tree
 * @tree: Points to the node of the tree to calculate size
 * Return: Size (success), 0 (NULL)
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
	{
		return (0);
	}
	size = binary_tree_size(tree->left) + 1;
	size += binary_tree_size(tree->right);

	return (size);
}
