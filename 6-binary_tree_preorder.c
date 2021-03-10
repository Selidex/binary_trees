#include "binary_trees.h"

/**
 *binary_tree_preorder - preorder traversal
 *@tree: the tree being traversed
 *@func: the function being performed on the tree
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
