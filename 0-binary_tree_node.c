#include "binary_trees.h"

/**
 * binary_tree_node - generates a binary tree node.
 * @parent: Points to the parent node of generated node.
 * @value: Value for new node
 * Return: Pointer to the new node (sucess), or NULL (failure)
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
	{
		return (NULL); /* failure on memory*/
	}

	newnode->parent = parent;
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;

	return (newnode);
}
