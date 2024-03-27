#include "binary_trees.h"

/**
 * binary_tree_postorder - it traverses a binary tree using post-order traversal method
 * @tree: pointer to the root node of the tree to be traverse
 * @func: pointer to a function that calls for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
