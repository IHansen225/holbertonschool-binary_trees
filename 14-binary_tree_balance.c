#include "binary_trees.h"

/**
 * binary_tree_height - calculates height of the tree
 *
 * @tree: binary tree
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
		return (0);
	l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
	return (l > r ? l : r);
}

/**
 * binary_tree_balance - checks if a binary tree is balanced
 *
 * @tree: binary tree
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
		return (0);
	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	return (l - r);
}
