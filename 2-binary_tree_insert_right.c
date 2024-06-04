#include "binary_trees.h"

/**
 * binary_tree_insert_right - adds a new node as the right child
 * of a node
 * @parent: Points to the parent node.
 * @value: Value for the new node
 * Return: Points to the newly added right child(success), or NULL (failure)
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightnode;

	/* Check if the parent is empty */
	if (parent == NULL)
	{
		return (NULL);
	}

	/* assign memory to the right node. */
	rightnode = malloc(sizeof(binary_tree_t));
	if (rightnode == NULL)
	{
		return (NULL); /* Failure of Memory allocation */
	}

	/* Instantiates the newly inserted right node */
	rightnode->parent = parent;
	rightnode->n = value;
	rightnode->right = parent->right;
	rightnode->left = NULL;

	/* modernize pointers of current nodes */
	if (rightnode->right != NULL)
	{
		rightnode->right = parent->right;
		parent->right->parent = rightnode;
	}

	/* modernizee the right child pointer of the parent. */
	parent->right = rightnode;

	return (rightnode); /* Return pointer to the newly assigned right child */
}
