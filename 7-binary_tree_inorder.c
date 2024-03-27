#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal method
 * @tree: tree to traverse
 * @func: pointer to a function that calls for each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return (0);

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
