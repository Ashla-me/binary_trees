#include <stdio.h>
#include <math.h>
#include "binary_trees.h"

/**
 * binary_tree_height - it determines height of a given tree
 * @tree: pointer to tree node
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	const binary_tree_t *left = NULL, *right = NULL;
	size_t hit = 0, hid = 0;

	if (!tree)
		return (0);

	else
	{
		if (tree->left)
		{
			left = tree->left;
			hit = binary_tree_height(left) + 1;
		}
		else
			hit = 0;
		if (tree->right)
		{
			right = tree->right;
			hid = binary_tree_height(right) + 1;
		}
		else
			hid = 0;
		if (hit < hid)
			return (hid);
		else
			return (hit);
	}
}

/**
 * binary_tree_size - counts all number of nodes
 * @tree: tree's root node
 *
 * Return: amount of nodes
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	const binary_tree_t *first = NULL, *second = NULL;

	if (!tree)
		return (0);

	if (tree->left)
		first = tree->left;
	if (tree->right)
		second = tree->right;
	return (binary_tree_size(first) + 1 + binary_tree_size(second));
}

/**
 * binary_tree_is_perfect - it determines amount if tree is perfect
 * @tree: tree root node
 *
 * Return: 1 if tree is perfect, else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h, s, a = 0, p = 1;

	h = binary_tree_height(tree);
	s = binary_tree_size(tree);

	while (a < h + 1)
	{
		p *= 2;
		a++;
	}

	if (!tree)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (1);
	if ((p - 1) == s)
		return (1);

	return (0);
}
