#include "binary_trees.h"

/**
 * binary_tree_uncle - Function that returns uncle of a node
 * @node: Node to retuen uncle of
 * Return: Pointer to uncle or NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}

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
