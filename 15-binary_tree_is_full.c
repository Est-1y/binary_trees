#include "binary_trees.h"

/**
 * binary_tree_is_full - examine if a binary tree is full
 * @tree: Points to the root node
 * Return: 1 (full), 0 (NULL or not full)
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int is_full_right, is_full_left;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left == NULL && tree->right != NULL)
		return (0);

	if (tree->left != NULL && tree->right == NULL)
		return (0);

	is_full_left = binary_tree_is_full(tree->left);
	is_full_right = binary_tree_is_full(tree->right);

	if (is_full_right == 1 && is_full_left == 1)
		return (1);
	return (0);
}
