#include "binary_trees.h"

/**
 * binary_tree_is_bst_h - Checks if a binary tree is a binary search tree (BST).
 * @tree: A pointer to the root node of the binary tree.
 * @min: The minimum value the node's value can be.
 * @max: The maximum value the node's value can be.
 *
 * Return: 1 if the tree is a BST, otherwise 0.
 */
int binary_tree_is_bst_h(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);

	if (tree->n <= min || tree->n >= max)
		return (0);

	return (binary_tree_is_bst_h(tree->left, min, tree->n) &&
		   binary_tree_is_bst_h(tree->right, tree->n, max));
}

/**
 * binary_tree_height_h - Calculates the height of a binary tree.
 * @tree: A pointer to the root node of the binary tree.
 *
 * Return: The height of the binary tree.
 */
int binary_tree_height_h(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (-1);

	left_height = binary_tree_height_h(tree->left);
	right_height = binary_tree_height_h(tree->right);

	return (1 + ((left_height > right_height) ? left_height : right_height));
}

/**
 * binary_tree_is_avl - Checks if a binary tree is a valid AVL Tree.
 * @tree: A pointer to the root node of the binary tree.
 *
 * Return: 1 if the tree is a valid AVL Tree, otherwise 0.
 */

int binary_tree_is_avl(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	/* Check if the tree is a BST */
	if (!binary_tree_is_bst_h(tree, INT_MIN, INT_MAX))
		return (0);

	/* Check if the difference between heights of left and right subtrees is at most one */
	left_height = binary_tree_height_h(tree->left);
	right_height = binary_tree_height_h(tree->right);

	if (abs(left_height - right_height) > 1)
		return (0);

	/* Check if both the left and right subtrees are also AVL trees */
	if (!binary_tree_is_avl(tree->left) || !binary_tree_is_avl(tree->right))
		return (0);

	/* If all conditions are met, the tree is a valid AVL Tree */
	return (1);
}
