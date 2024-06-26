#include "binary_trees.h"

/**
 * binary_tree_height - it measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure
 *
 * Return: 0 - if tree dont exist, else return the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t first = 0, second = 0;

		first = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		second = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((first > second) ? first : second);
	}
	return (0);
}
