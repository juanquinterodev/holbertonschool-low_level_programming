#include "binary_trees.h"
/**
* binary_tree_insert_right - inserts a node as the right-child
* @parent: pointer to the node to insertn
* @value: value to store in the new node
* Return: pointer to the created node, or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL, *aux = NULL;

	if (!parent)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	if (parent->right == NULL)
	{
		parent->right = node;
		node->right = NULL;
	}
	else
	{
		aux = parent->right;
		parent->right = node;
		node->right = aux;
		aux->parent = node;
	}
	return (node);
}
