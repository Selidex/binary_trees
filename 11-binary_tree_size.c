#include "binary_trees.h"

/**
 * binary_tree_size - Function to return size of binary tree
 * @tree: Tree to measure sizes of
 * Return: size of tree or 0 if null
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
