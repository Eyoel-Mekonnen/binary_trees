#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert a node to the left
 * @parent: the parent node
 * @value: value of the node
 * 
 * Return: address of the new node
 *
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);
	binary_tree_t *ptr = binary_tree_node(parent, value);

	if (ptr == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		ptr->left = parent->left;
		parent->left->parent = ptr;
		parent->left = ptr;
	}
	else if (parent->left == NULL)
	{
		parent->left = ptr;
	}
	return (ptr);
}
