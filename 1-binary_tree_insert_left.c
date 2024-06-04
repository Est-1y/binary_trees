#include "binary_trees.h"

/**
 * binary_tree_insert_left - add a new node as the left child
 * @parent: Points to the parent node
 * @value: Value for the new node
 * Return: Points to the inserted left child(success), or NULL (failure)
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftnode;

	/* no insertion allowed if parent is null */
	if (parent == NULL)
	{
		return (NULL);
	}

	/* assign memory for the left node */
	leftnode = malloc(sizeof(binary_tree_t));
	if (leftnode == NULL)
	{
		return (NULL); /* failure of allocation of memory */
	}

	/* Instantiate the new node */
	leftnode->parent = parent;
	leftnode->n = value;
	leftnode->left = parent->left;
	leftnode->right = NULL;

	/* Adjust pointers of existing nodes if the parent already has a left child */
	if (parent->left != NULL)
	{
		leftnode->left = parent->left;
		parent->left->parent = leftnode;
	}

	/* Adjust left child pointer of the parent */
	parent->left = leftnode;

	return (leftnode); /* bring back pointer to the new left child */
}
