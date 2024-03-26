#include "binary_trees.h"
/**
 * binary_tree_node - creates a node
 * @parent: node passed
 * @value: value that is passed
 *
 * Return: address of the created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *ptr = malloc(sizeof(binary_tree_t));

	if (ptr == NULL)
		return (NULL);
	ptr->right = NULL;
	ptr->left = NULL;
	ptr->n = value;
	ptr->parent = parent;
	return (ptr);
}
