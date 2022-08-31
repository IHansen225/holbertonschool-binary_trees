#include "binary_trees.h"

/**
 * binary_tree_delete - delete a node from binary tree
 * @parent: parent node
 * @value: int value
 * Return: node value
 */
void binary_tree_delete(binary_tree_t *tree)
{

	if (!tree)
		return;
	
	if (tree->left)
	{
		binary_tree_delete(tree->left);
	}

	if (tree->right)
	{
		binary_tree_delete(tree->right);
	}
	
	free(tree);
}