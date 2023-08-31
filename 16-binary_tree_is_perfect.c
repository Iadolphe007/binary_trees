#include "binary_trees.h"

/**
 * binary_tree_height - binary tree height
 * @tree: pointer to the node
 * Return: 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_is_perfect - checks for perfect binary tree
 * @tree: pointer to the root node
 * Return: 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((left_height == right_height) &&
		binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));
}
