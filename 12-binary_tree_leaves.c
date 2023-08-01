#include "binary_trees.h"

void count_leaves(const binary_tree_t *node, size_t *leaves);

/**
 * binary_tree_leaves - Measures the number of leaves in a binary tree
 * @tree: A pointer to the root node of the tree
 *
 * Return: The number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		if (tree->left || tree->right)
		{
			count_leaves(tree->left, &leaves);
			count_leaves(tree->right, &leaves);
		}
	}
	return (leaves);
}

/**
 * count_leaves - Recursively counts number of leaves in a binary tree
 * @node: A pointer to a tree node
 * @leaves: A pointer to the number of leaves
 *
 * Return: Nothing
 */
void count_leaves(const binary_tree_t *node, size_t *leaves)
{
	if (node)
	{
		if (node->left == NULL && node->right == NULL)
		{
			(*leaves)++;
		}
		else
		{
			count_leaves(node->left, leaves);
			count_leaves(node->right, leaves);
		}
	}
}
