#include "binary_trees.h"
/**
 * binary_tree_nodes - counts node with atleast one child
 * @tree: address of the node
 *
 * Return: count of the node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t leaves_right = 0;
	size_t leaves_left = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL ))
		return (0);
	leaves_left = binary_tree_nodes(tree->left);
	leaves_right = binary_tree_nodes(tree->right);
	return (leaves_left + leaves_right + 1);
}
