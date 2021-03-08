#include "binary_trees.h"

/**
 *binary_tree_insert_right - inserts a node to the left of current node
 *@parent: the parent of the node being inserted
 *@value: the value for the node being inserted
 *Return: address of node, or NULL on failure/parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nn;

	if (parent == NULL)
		return (NULL);
	nn = malloc(sizeof(binary_tree_t));
	if (nn == NULL)
		return (NULL);
	if (parent->right != NULL)
		parent->right->parent = nn;
	nn->left = NULL;
	nn->right = parent->right;
	nn->n = value;
	parent->right = nn;
	nn->parent = parent;
	return (nn);
}
