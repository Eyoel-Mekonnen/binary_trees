#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert a tree to the right
 * @parent: parent node
 * @value: value
 *
 * Return: return the address of the created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *ptr;

	if (parent == NULL)
		return (NULL);
	ptr = binary_tree_node(parent, value);
	if (parent->right != NULL)
	{
		ptr->right = parent->right;
		parent->right->parent = ptr;
		parent->right = ptr;
	}
	else
	{
		parent->right = ptr;
	}
	return (ptr);
}
