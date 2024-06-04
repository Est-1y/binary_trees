#include "binary_trees.h"

/**
 * binary_tree_depth - calculate the depth of a node
 * @tree: Points to the node to calculate depth
 * Return: node depth(success), 0 (NULL)
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (depth);

	if (tree->parent == NULL)
		return (depth);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
