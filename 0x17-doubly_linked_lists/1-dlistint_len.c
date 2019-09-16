#include "lists.h"
/**
* dlistint_len - return number the elements of the list.
*@h: list parameter.
*Return: the number of nodes.
*/
size_t dlistint_len(const dlistint_t *h)
{
	int sum = 0;

	if (h == NULL)
	{
		return (sum);
	}
	for (sum = 0; h != NULL; sum++)
	{
		h = h->next;
	}
	return (sum);
}
