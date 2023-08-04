#include "binary_trees.h"

/**
 * create_new_node - Creates a new node for the binary search tree.
 *
 * @value: The value to store in the new node.
 * @parent: The parent node of the new node.
 *
 * Return: A pointer to the newly created node, or NULL on failure.
 */
bst_t *create_new_node(int value, bst_t *parent)
{
	/* Allocate memory for the new node */
	bst_t *new_node = (bst_t *)malloc(sizeof(bst_t));

	if (new_node == NULL)
		return (NULL);

	/* Set values for the new node */
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}

/**
 * bst_insert - Inserts a value into a binary search tree (BST).
 *
 * @tree: A double pointer to the root node of the BST.
 * @value: The value to be inserted.
 *
 * Return: A pointer to the created node, or NULL on failure or if value
 * already exists.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	if (*tree == NULL)
	{
		/* Create a new node and make it the root node */
		*tree = create_new_node(value, NULL);
		return (*tree);
	}

	/* If the value is less than the current node's value, go left */
	if (value < (*tree)->n)
	{
		if ((*tree)->left)
			return (bst_insert(&((*tree)->left), value));

		/* Create a new node and insert it to the left */
		(*tree)->left = create_new_node(value, *tree);
		return ((*tree)->left);
	}
	/* If the value is greater than the current node's value, go right */
	else if (value > (*tree)->n)
	{
		if ((*tree)->right)
			return (bst_insert(&((*tree)->right), value));

		/* Create a new node and insert it to the right */
		(*tree)->right = create_new_node(value, *tree);
		return ((*tree)->right);
	}

	/* If the value is equal to the current node's value, do not insert again */
	return (*tree);
}
