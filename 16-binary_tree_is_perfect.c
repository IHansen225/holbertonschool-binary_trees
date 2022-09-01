#include "binary_trees.h"

/**
 * full - checks if a binary tree is full
 *
 * @tree: binary tree
 * Return: 1 if full, 0 otherwise
 */

int full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!!tree->left ^ !!tree->right)
		return (0);
	if (tree->left && tree->right)
		return (full(tree->left) && full(tree->right));
	return (1);
}

/**
 * height - calculates height of the tree
 *
 * @tree: binary tree
 * Return: balance of the tree
 */

size_t height(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
		return (0);
	l = tree->left ? 1 + height(tree->left) : 1;
	r = tree->right ? 1 + height(tree->right) : 1;
	return (l > r ? l : r);
}

/**
 * balance - checks if a binary tree is balanced
 *
 * @tree: binary tree
 * Return: balance factor
 */

int balance(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
		return (0);
	l = height(tree->left);
	r = height(tree->right);
	return (l - r);
}

/**
 * is_perfect - returns true if the binary tree is perfect
 *
 * @tree: binary tree
 * Return: true if the binary tree is perfect
 */

int is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!!tree->left ^ !!tree->right)
		return (0);
	if (tree->left && tree->right)
		return (!balance(tree) && (is_perfect(tree->left) && is_perfect(tree->right)));
	return (1);
}

/**
 * binary_tree_is_perfect - returns true if the binary tree is perfect
 *
 * @tree: binary tree
 * Return: true if the binary tree is perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	return (is_perfect(tree));
}

