#include "binary_trees.h"

/**
 * binary_tree_uncle - it gets the uncle of a node in a binary tree
 * @node: pointer to the node to get the uncle
 *
 * Return: NULL if node is NULL or has no uncle, else pointer to uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
			node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
