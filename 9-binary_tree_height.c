#include "binary_trees.h"

/**
 * binary_tree_height - Function to measure height of binary tree
 * @tree: Tree to measure height of
 * Return: Height or 0 if tree is null
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (right_height > left_height)
		return (right_height + 1);
	else
		return (left_height + 1);
}
