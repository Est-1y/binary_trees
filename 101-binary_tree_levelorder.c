#include "binary_trees.h"

/**
 * binary_tree_height - calculates the height.
 * @tree: points to the roo.
 * Return: 0(NULL)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
/**
 * print_at_level - prints nodes.
 * @tree: points to the root node
 * @func: points to a function.
 * @level: level to be printed.
 */
void print_at_level(const binary_tree_t *tree, void (*func)(int), int level)
{
	if (tree && func)
	{
		if (level == 1)
			func(tree->n);
		else if (level > 1)
		{
			print_at_level(tree->left, func, level - 1);
			print_at_level(tree->right, func, level - 1);
		}
	}
}

/**
 * binary_tree_levelorder - covers a binary tree in level-order traversal
 * @tree: points to the root node
 * @func: pointer to function to be called
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	size_t height = binary_tree_height(tree);

	for (size_t i = 1; i <= height; i++)

		print_at_level(tree, func, i);
}
