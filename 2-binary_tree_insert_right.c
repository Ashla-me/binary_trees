#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node at the right-child of another node
 * @parent: pointer to the node to insert the right-child
 * @value: value to be store in the new node
 *
 * Return: pointer to the creator node
 *         NULL if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nid;

	if (parent == NULL)
		return (NULL);

	nid = malloc(sizeof(binary_tree_t));
	if (nid == NULL)
		return (NULL);

	nid->n = value;
	nid->parent = parent;
	nid->left = NULL;
	nid->right = parent->right;
	parent->right = nid;
	if (nid->right)
		nid->right->parent = nid;
	return (nid);
}
