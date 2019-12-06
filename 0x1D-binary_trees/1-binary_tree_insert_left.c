#include "binary_trees.h"
/**
* binary_tree_insert_left - inserts a node as the left-childe
* @parent: pointer to the node to insert
* @value: value to store in the new node
* Return: pointer to the created node, or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL, *aux = NULL;

	if (!parent)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->right = NULL;
	if (parent->left == NULL)
	{
		parent->left = node;
		node->left = NULL;
	}
	else
	{
		aux = parent->left;
		parent->left = node;
		node->left = aux;
		aux->parent = node;
	}
	return (node);
}
