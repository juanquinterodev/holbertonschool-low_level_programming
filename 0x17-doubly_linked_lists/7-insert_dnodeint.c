#include "lists.h"
/**
* dlistint_len - len of the list.
*@h: the list.
*Return: the number of nodes of 0 if none.
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
/**
* insert_dnodeint_at_index - insert a node in x position.
*@h: the list.
*@idx: the node it will be added
*@n: the number that will be added.
*Return: the number of nodes of 0 if none.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int sum = 0;
	size_t lennode = 0;
	dlistint_t *new;
 	dlistint_t *aux;

	if (h == NULL)
		return (NULL);
	aux = *h;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	lennode = dlistint_len(aux);
	if (idx <= lennode)
	{
		if (idx == 0)
		{
			add_dnodeint(h, n);
			return (*h);
		}
		for (sum = 0; sum < (idx - 1); sum++)
		{
			aux = aux->next;
		}
		if (lennode == idx)
		{
			new = add_dnodeint_end(h, n);
			return (new);
		}
		new->prev = aux;
		new->next = aux->next;
		new->next->prev = new;
		new->n = n;
		aux->next = new;
		return (new);
	}
	else
	{
		return (NULL);
	}
	return (NULL);
}
