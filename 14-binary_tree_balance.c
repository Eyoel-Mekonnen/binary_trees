#include "binary_trees.h"
/**
 * tree_height - returns the height of the tree
 * @tree: address of the node of the tree
 *
 * Return: integer
 */
int tree_height(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
		return (0);
	left = tree_height(tree->left);
	right = tree_height(tree->right);
	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}
/**
 * binary_tree_balance - checks if a tree is balanced
 * @tree: address of the node
 *
 * Return: number based on difference of two height
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
		return (0);
	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);
	return (left_height - right_height);
}
