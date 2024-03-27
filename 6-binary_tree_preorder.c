#include "binary_trees.h"
/**
 * binary_tree_preorder - preorder traversal function
 * @tree: root node address passed
 * @func: address of a function is passed
 *
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL|| func == NULL)
		return;
	else
	{
		(*func)(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right,func);
	}
}
