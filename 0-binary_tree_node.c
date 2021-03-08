#include "binary_trees.h"

/**
 *binary_tree_node - creates a binary tree node
 *@parent: parent of the node being made
 *@value: the number being stored in the node
 *Return: the node made, NULL if failed
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nn;

	nn = malloc(sizeof(binary_tree_t));
	if (nn == NULL)
		return (NULL);
	nn->n = value;
	nn->left = NULL;
	nn->right = NULL;
	nn->parent = parent;
	return (nn);
}
