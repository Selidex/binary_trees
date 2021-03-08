#include "binary_trees.h"

/**
 *binary_tree_insert_left - inserts a node to the left of current node
 *@parent: the parent of the node being inserted
 *@value: the value for the node being inserted
 *Return: address of node, or NULL on failure/parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nn;

	if (parent == NULL)
		return (NULL);
	nn = malloc(sizeof(binary_tree_t));
	if (nn == NULL)
		return (NULL);
	if (parent->left != NULL)
		parent->left->parent = nn;
	nn->right = NULL;
	nn->left = parent->left;
	nn->n = value;
	parent->left = nn;
	nn->parent = parent;
	return (nn);
}
