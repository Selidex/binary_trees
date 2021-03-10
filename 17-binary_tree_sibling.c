#include "binary_trees.h"

/**
 * binary_tree_sibling - function to find sibling of a node
 * @node: Node to find sibling of
 * Return: Pointer to the sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *temp;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	temp = node->parent;
	if (temp->left == node)
		return (temp->right);
	else
		return (temp->left);
}
