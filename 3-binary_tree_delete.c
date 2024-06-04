#include "binary_trees.h"

/**
 * binary_tree_delete - removes an complete binary tree
 * @tree: Points to the root node of the tree to remove
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return; /* no action required if the tree is NULL */
	}

	/* remove left and right subtrees */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
