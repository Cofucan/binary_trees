#include "binary_trees.h"

void count_height(binary_tree_t *tree, size_t height, size_t *max);

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t max_height = 0;
	size_t height = 0;

	if (tree)
	{
		count_height(tree->left, height++, &max_height);
		count_height(tree->right, height++, &max_height);
	}

	return (max_height);
}

/**
 * count_height - Measures the number of nodes in a binary tree path from the
 *              root node
 * @tree: A pointer to the parent node
 * @height: The current height of the tree
 * @max: The maximum height of the tree
 */
void count_height(binary_tree_t *tree, size_t height, size_t *max)
{
	if (tree)
	{
		if (tree->left == NULL && tree->right == NULL)
		{
			if (height > *max)
			{
				*max = height;
			}
		}
		else
		{
			count_height(tree->left, height + 1, max);
			count_height(tree->right, height + 1, max);
		}
	}
}
