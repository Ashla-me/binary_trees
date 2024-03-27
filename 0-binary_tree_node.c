#include "binary_trees.h"

/**
 * binary_tree_node - creates binary tree node
 * @parent: pointer to the parent node created
 * @value: node value
 *
 * Return: Pointer to newly created node
 *         NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nid;

	nid = malloc(sizeof(binary_tree_t));
	if (nid == NULL)
		return (NULL);
	nid->n = value;
	nid->parent = parent;
	nid->left = NULL;
	nid->right = NULL;

	return (nid);
}
