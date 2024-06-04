#include "binary_trees.h"

/**
 * binary_tree_is_leaf - examine if a node is a leaf
 * @node: Points to the node to be examined
 * Return: 1 if node is a leaf(Success), 0 otherwise(fail)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
