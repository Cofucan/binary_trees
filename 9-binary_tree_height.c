#include "binary_trees.h"

void count_height(binary_tree_t *tree, size_t height, size_t *max);

size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t max_height = 0;
    size_t height = 0;
    count_height(tree->left, ++height, &max_height);
    count_height(tree->right, ++height, &max_height);

    return (max_height);
}

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
