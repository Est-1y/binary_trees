#include "binary_trees.h"
#include "17-binary_tree_sibling.c"

/**
 * binary_tree_uncle - search for the uncle node
 * @node: Points to the node
 * Return: Pointer (uncle node), or NULL (no uncle)
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
