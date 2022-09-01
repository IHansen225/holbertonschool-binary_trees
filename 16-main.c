#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/* Our own functions */
binary_tree_t *_binary_tree_node(binary_tree_t *parent, int value);
void binary_tree_print(const binary_tree_t *tree);
void _binary_tree_delete(binary_tree_t *tree);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	binary_tree_t *root;
	int perfect;

	root = _binary_tree_node(NULL, 70);
	root->left = _binary_tree_node(root, 50);
	root->right = _binary_tree_node(root, 90);
	root->left->left = _binary_tree_node(root->left, 40);
	root->left->right = _binary_tree_node(root->left, 60);
	root->right->left = _binary_tree_node(root->right, 80);
	root->right->right = _binary_tree_node(root->right, 110);
	root->right->right->left = _binary_tree_node(root->right->right, 105);
	root->right->right->right = _binary_tree_node(root->right->right, 120);
	/*root->right->left->left = _binary_tree_node(root->right->left, 75);*/
	/*root->right->left->right = _binary_tree_node(root->right->left, 85);*/
	root->left->right->left = _binary_tree_node(root->left->right, 55);
	root->left->right->right = _binary_tree_node(root->left->right, 65);
	root->left->left->left = _binary_tree_node(root->left->left, 35);
	root->left->left->right = _binary_tree_node(root->left->left, 45);

	perfect = binary_tree_is_perfect(root);
	printf("Is the tree with root node (%d) perfect? %d\n", root->n, perfect);

	binary_tree_print(root);
	_binary_tree_delete(root);
	return (0);
}