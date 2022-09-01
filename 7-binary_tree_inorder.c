#include "binary_trees.h"

/**
 * binary_tree_preorder - preorder traversal of a binary tree
 *
 * @tree: binary tree
 * @func: function to call
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	if (tree->left)
	{
		binary_tree_preorder(tree->left, func);
	}
	func(tree->n);
	if (tree->right)
	{
		binary_tree_preorder(tree->right, func);
	}
}
