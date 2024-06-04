#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses a binary tree using pre-order coverage
 * @tree: Points to the root node of the tree to be covered
 * @func: Points to a function to be called
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;/*no action*/
	}

	func(tree->n);

	binary_tree_preorder(tree->left, func);

	binary_tree_preorder(tree->right, func);
}
