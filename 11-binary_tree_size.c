#include "binary_trees.h"

void count_nodes(binary_tree_t *tree, size_t *size);

/**
 * binary_tree_size - Measures the number of nodes on all levels of a binary
 * tree
 * @tree: A pointer to the root node of the tree
 *
 * Return: The number of nodes
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (size);

	size++;
	count_nodes(tree->left, &size);
	count_nodes(tree->right, &size);

	return (size);
}

/**
 * count_nodes - Measures the number of nodes on all levels of a binary tree
 * @tree: A pointer to the root node of the tree
 * @size: Address to store the number of nodes
 *
 * Return: Nothing
 */
void count_nodes(binary_tree_t *tree, size_t *size)
{
	if (tree)
	{
		(*size)++;
		count_nodes(tree->left, size);
		count_nodes(tree->right, size);
	}
}
