#include "binary_trees.h"

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
	l = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
	r = tree->right ? 1 + binary_tree_balance(tree->right) : 0;
	return (l - r);
}
