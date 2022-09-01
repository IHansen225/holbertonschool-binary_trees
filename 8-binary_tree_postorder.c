#include "binary_trees.h"

/**
 * binary_tree_postorder - postorder traversal of a binary tree
 *
 * @tree: binary tree
 * @func: function to call
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	if (tree->left)
	{
		binary_tree_inorder(tree->left, func);
	}
	if (tree->right)
	{
		binary_tree_inorder(tree->right, func);
	}
	func(tree->n);
}
