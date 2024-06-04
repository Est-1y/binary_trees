#include "binary_trees.h"

/**
 * binary_tree_is_root - examine if a given node is a root
 * @node: Points to the node to be examined
 * Return: 1 if node is a root(success), 0 otherwise(fail)
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL && node->parent == NULL)
	{
		return (1);
	}

	return (0);
}
