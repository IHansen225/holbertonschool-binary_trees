#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if a node is a leaf
 *
 * @node: binart tree node
 * Return: 1 if leaf, 0 otherwise
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent && !node->left && !node->right)
		return (1);
	if (!node->parent && !node->left && !node->right)
		return (1);
	return (0);
}
