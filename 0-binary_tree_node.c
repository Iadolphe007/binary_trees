#include  "binary_trees.h"


/**
 * binary_tree_node - create a binary tree
 * @parent: pointer to the parent node
 * of the node to create
 * @value: valur to put in the new node
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;
	/*allocate memory of the new node*/
	newNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);


}
