#include "binary_trees.h"

void count_nodes(const binary_tree_t *node, size_t *nodes);

/**
 * binary_tree_nodes - Measures the number of nodes in a binary tree that have
 *                      at least one child
 * @tree: A pointer to the root node of the tree
 *
 * Return: The number of nodes that are not nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		if (tree->left || tree->right)
		{
			nodes++;
			count_nodes(tree->left, &nodes);
			count_nodes(tree->right, &nodes);
		}
	}
	return (nodes);
}

/**
 * count_nodes - Recursively counts number of nodes in a binary tree
 * @node: A pointer to a tree node
 * @nodes: A pointer to the number of nodes
 *
 * Return: Nothing
 */
void count_nodes(const binary_tree_t *node, size_t *nodes)
{
	if (node)
	{
		if (node->left || node->right)
		{
			(*nodes)++;
		}
		else
		{
			count_nodes(node->left, nodes);
			count_nodes(node->right, nodes);
		}
	}
}
