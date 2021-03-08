#include "binary_trees.h"

/**
 * binary_tree_leaves - Function to count leaves of binary tree
 * @tree: Tree to count the leaves on
 * Return: Number of leaves or 0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
