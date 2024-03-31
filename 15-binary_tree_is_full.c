#include "binary_trees.h"
/**
 * binary_tree_is_full - checks wether a tree is full or not
 * @tree: address of the node
 *
 * Return: 1 if full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_tree = 0;
	int right_tree = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL && tree->right != NULL)
	{
		left_tree = binary_tree_is_full(tree->left);
		right_tree = binary_tree_is_full(tree->right);
	}
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (left_tree && right_tree);
}
