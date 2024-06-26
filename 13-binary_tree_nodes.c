#include "binary_trees.h"

/**
 * binary_tree_nodes - it counts nodes with at least 1 child
 * @tree: pointer to root node of the tree to count all the number of nodes
 *
 * Return: 0 if tree is NULL, else number of nodes with child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree)
	{
		count += (tree->left || tree->right) ? 1 : 0;
		count += binary_tree_nodes(tree->left);
		count += binary_tree_nodes(tree->right);
	}
	return (count);
}
