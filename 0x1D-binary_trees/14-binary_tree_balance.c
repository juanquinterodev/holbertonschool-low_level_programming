#include "binary_trees.h"
/**
* binary_tree_height - measures the heighte
* @tree: pointer to the root node
* Return: height or 0 if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left = 0, h_right = 0;

	if (!tree)
		return (0);
	if (tree->left)
		h_left = 1 + binary_tree_height(tree->left);
	else
		h_left = 0;
	if (tree->right)
		h_right = 1 + binary_tree_height(tree->right);
	else
		h_right = 0;
	if (h_left > h_right)
		return (h_left);
	else
		return (h_right);
}
/**
* binary_tree_balance - measures the balance factore
* @tree: pointer to the root node
* Return: 0 if treee is NULL0
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left = binary_tree_height(tree->left);
	else
		left = -1;
	if (tree->right)
		right = binary_tree_height(tree->right);
	else
		right = -1;
	return (left - right);
}
