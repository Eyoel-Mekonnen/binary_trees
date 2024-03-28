#include "binary_trees.h"
/**
 * binary_tree_size - returns the size of a binary tree
 * @tree: address of the node
 *
 * Return: size of a given tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_tree = 0;
	size_t right_tree = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		left_tree = binary_tree_size(tree->left);
	if (tree->right != NULL)
		right_tree = binary_tree_size(tree->right);
	return ((left_tree + right_tree + 1));
}
