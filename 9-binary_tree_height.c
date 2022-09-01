#include "binary_trees.h"

/**
 * binary_tree_height - calculates height of the tree
 * 
 * @tree: binary tree
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l;
	size_t r;

	l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (l > r ? l : r);
}
