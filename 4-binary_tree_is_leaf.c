#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks wether a node is a leaf or not
 * @node: the adress of the node passed
 *
 * Return: 1 if it is leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
}
