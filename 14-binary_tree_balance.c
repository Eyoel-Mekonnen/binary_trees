#include "binary_trees.h"
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
	if (tree->left != NULL)
		left_height = binary_tree_balance(tree->left) + 1;
	if (tree->right != NULL)
		right_height = binary_tree_balance(tree->right) + 1;
	return (left_height - right_height);
}
