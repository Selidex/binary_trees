#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Function to check if a binary tree is perfect
 * @tree: Tree to check perfectness of
 * Return: 1 if the tree is perfect otherwise 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_is_full(tree) == 0)
		return (0);
	if (binary_tree_balance(tree->left) != 0 ||
		binary_tree_balance(tree->right) != 0)
		return (0);
	return (1);
}

/**
 *binary_tree_is_full - checks if tree had a large meal recently
 *@tree: the tree being checked
 *Return: 0 if not full, 1 if full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (binary_tree_is_full(tree->left) &&
		binary_tree_is_full(tree->right));
}

/**
 *binary_tree_balance - returns balance of tree
 *@tree: the tree being measured
 *Return: int - balance of tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return (left - right);
}

/**
 * binary_tree_height - Function to measure height of binary tree
 * @tree: Tree to measure height of
 * Return: Height or 0 if tree is null
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (right_height > left_height)
		return (right_height + 1);
	else
		return (left_height + 1);
}
