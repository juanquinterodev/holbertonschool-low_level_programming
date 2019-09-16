#include "lists.h"
/**
*add_dnodeint_end - adds a node at the end of the list
*@head: the head parameter
*@n: the node that will be added.
*Return: the list update.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *aux;
	int sum;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new;
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}
	aux = *head;
	for (sum = 0; aux->next != NULL; sum++)
	{
		aux = aux->next;
	}
	aux>next = new;
	new->prev = aux;
	new->n = n;
	return (new);
}
