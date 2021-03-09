#include "binary_trees.h"

/**
 *binary_tree_is_full - checks if tree had a large meal recently
 *@tree: the tree being checked
 *Return: 0 if not full, 1 if full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (binary_tree_is_full(tree->left) &&
		binary_tree_is_full(tree->right));
}
