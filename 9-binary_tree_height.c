#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of tree to measure the height
 * Return: height of binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int right_height;
	int left_height;

	if (tree == NULL)
		return(0);

	right_height = binary_tree_height(tree->right);
	left_height = binary_tree_height(tree->left);

	return (1 + (left_height > right_height ? left_height : right_height));
}
