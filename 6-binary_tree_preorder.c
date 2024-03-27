#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal method
 * @tree: tree to traverse
 * @func: pointer to a function that calls for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return (0);

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
