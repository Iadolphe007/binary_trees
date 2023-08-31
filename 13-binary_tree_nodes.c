#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at
 * least 1 child in a binary tree
 * @tree:  a pointer to the root node of the tree to
 * count the number of nodes
 * Return: node with 1 child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int left_nodes, right_nodes;
	int current_node;

	if (tree == NULL)
		return (0);

	left_nodes = binary_tree_nodes(tree->left);
	right_nodes = binary_tree_nodes(tree->right);
	current_node = (tree->left != NULL || tree->right != NULL);
	return (left_nodes + right_nodes + current_node);
}
