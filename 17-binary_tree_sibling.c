#include "binary_trees.h"
/**
 * binary_tree_sibling - finds sibiling of a node
 * @node: node of a tree
 *
 * Return: address of the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	else
	{
		if (node == node->parent->left)
			return (node->parent->right);
		else
			return (node->parent->left);
	}
}
