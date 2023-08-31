#include "binary_trees.h"

/**
 * binary_tree_leaves - count leaves inn binary tree
 * @tree: pointer to the root node of the tree to count
 * the number of leaves
 * Return: number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int left_leaves, right_leaves;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);

	return (left_leaves + right_leaves);
}
