#include "binary_trees.h"
/**
 * binary_tree_is_perfect - check if a tree is perfect
 * @tree: address of the node
 *
 * Return: 0 if perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_tree = 0;
	int right_tree = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
	{
		left_tree =  binary_tree_height(tree->left);
		right_tree = binary_tree_height(tree->right);
		if (left_tree == right_tree)
			return (binary_tree_is_perfect(tree->left) &&
					binary_tree_is_perfect(tree->right));
		else
			return (0);
	}
	else
		return (0);
}
