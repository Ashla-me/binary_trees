#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node at the left-child of another node
 * @parent: pointer to the node to be inserted in the left-child
 * @value: new nodes value
 *
 * Return: pointer to the main node
 *         NULL if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nid;

	if (parent == NULL)
		return (NULL);

	nid = malloc(sizeof(binary_tree_t));
	if (nid == NULL)
		return (NULL);

	nid->n = value;
	nid->parent = parent;
	nid->right = NULL;
	nid->left = parent->left;
	parent->left = nid;
	if (nid->left)
		nid->left->parent = nid;
	return (nid);
}
