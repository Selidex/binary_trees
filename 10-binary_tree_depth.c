#include "binary_trees.h"

/**
 * binary_tree_depth - Function to measure depth of a node
 * @tree: Pointer to node that needs a depth check
 * Return: depth of node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);
	return (binary_tree_depth(tree->parent) + 1);
}
