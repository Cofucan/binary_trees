#include "binary_trees.h"

/**
 * bst_insert - Inserts a value in a binary search tree (BST).
 * @tree: A double pointer to the root node of the BST.
 * @value: The value to be inserted.
 *
 * Return: A pointer to the newly inserted node, or NULL on failure.
 *
 * This function inserts a new node with the given value into the binary search tree (BST).
 * If the tree is empty, it creates a new node and sets it as the root node.
 * If the value is less than the current node's value, it goes to the left subtree.
 * If the value is greater than the current node's value, it goes to the right subtree.
 * If the value is already present in the BST, it does not insert again and returns the existing node.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new_tree, *new_node;

	if (*tree == NULL)
	{
		/* Create a new node and insert the value as the root */
		new_tree = (bst_t *)malloc(sizeof(bst_t));
		if (new_tree == NULL)
			return (NULL);

		new_tree->parent = NULL;
		new_tree->n = value;
		new_tree->left = NULL;
		new_tree->right = NULL;

		*tree = new_tree;
		return (new_tree);
	}

	/* If the value is less than the current node's value, go to the left subtree */
	if (value < (*tree)->n)
	{
		if ((*tree)->left)
			return (bst_insert(&((*tree)->left), value));

		/* Create a new node and insert the value as the left child */
		new_node = (bst_t *)malloc(sizeof(bst_t));
		if (new_node == NULL)
			return (NULL);

		new_node->parent = *tree;
		new_node->n = value;
		new_node->left = NULL;
		new_node->right = NULL;

		(*tree)->left = new_node;
		return (new_node);
	}

	/* If the value is greater than the current node's value, go to the right subtree */
	else if (value > (*tree)->n)
	{
		if ((*tree)->right)
			return (bst_insert(&((*tree)->right), value));

		/* Create a new node and insert the value as the right child */
		new_node = (bst_t *)malloc(sizeof(bst_t));
		if (new_node == NULL)
			return (NULL);

		new_node->parent = *tree;
		new_node->n = value;
		new_node->left = NULL;
		new_node->right = NULL;

		(*tree)->right = new_node;
		return (new_node);
	}

	/* If the value is equal to the current node's value, do not insert again */
	return (*tree);
}
