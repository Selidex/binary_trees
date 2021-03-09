#include "binary_trees.h"

/**
 *binary_tree_nodes - returns number of nodes with children
 *@tree: the tree being measured
 *Return: number of nodes with children
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}

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
