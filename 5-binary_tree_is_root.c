#include "binary_trees.h"

/**
 * binary_tree_is_root - check if node is a root node
 * 
 * @node: node to check
 * Return: 1 if node is a root node, 0 otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->parent && !node->left && !node->right)
		return (1);
	return (0);
}