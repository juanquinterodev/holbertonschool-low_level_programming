#include "lists.h"
/**
*add_dnodeint - adds a new node at the beginning of the list
*@head: the head of the node
*@n: the number that will be added.
*Return: the list update
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

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
	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	new->next = *head;
	new->prev = NULL;
	new->n = n;
	*head = new;
	return (new);
}
