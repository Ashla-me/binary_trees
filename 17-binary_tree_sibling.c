#include "binary_trees.h"

/**
 * binary_tree_sibling - it gets sibling of a node in a binary tree
 * @node: pointer to the node to get the sibling
 *
 * Return: NULL if node is NULL or no sibling, else pointer to the sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
