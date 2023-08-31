#include "binary_trees.h"


/**
 * binary_tree_height - checks height of binary tree
 * @tree: pointer to node
 * Return: 0
 */


size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return (1 + (left_height > right_height ? left_height : right_height));
}


/**
 * binary_tree_count_nodes - count node of tree
 * @tree: pointer to the node
 * Return: 0
 */

size_t binary_tree_count_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + binary_tree_count_nodes(tree->left) +
			binary_tree_count_nodes(tree->right));
}

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: pointer to the root node
 * Return: 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((left_height == right_height) &&
		(binary_tree_count_nodes(tree) ==(size_t)(1 << (left_height + 1)) - 1));
}
