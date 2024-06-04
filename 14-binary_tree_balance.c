#include "binary_trees.h"

/**
 * binary_tree_balance_height - calculate the height
 * @tree: Points to the node
 * Return: Height (success), 0 (NULL)
 */
size_t binary_tree_balance_height(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (-1);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left = binary_tree_balance_height(tree->left) + 1;
	right = binary_tree_balance_height(tree->right) + 1;

	if (left > right)
		return (left);
	else
		return (right);
}

/**
 * binary_tree_balance - calculates the balance factor
 * @tree: Point to the root node.
 * Return: Balance factor (success), 0 (NULL)
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_balance_height(tree->left);
	right = binary_tree_balance_height(tree->right);
	return (left - right);
}
