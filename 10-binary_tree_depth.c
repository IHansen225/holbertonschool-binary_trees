#include "binary_trees.h"

/**
 * binary_tree_depth - calculates the depth of a binary tree node
 *
 * @tree: pointer to the node 
 * Return: depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if(!tree)
		return (depth);
	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
