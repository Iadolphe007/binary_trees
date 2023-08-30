#include "binary_trees.h"

/**
 * binary_tree_is_root - check if a node is a root
 * @node: pointer to the node to check
 * Return: 1 if node is root or 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	return (node != NULL && node->left != NULL && node->right != NULL);
}
