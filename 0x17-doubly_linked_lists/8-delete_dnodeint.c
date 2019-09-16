#include "lists.h"
/**
*delete_dnodeint_at_index - delete node in that index
*@head: the list
*@index: the index that will be erased
*Return: the list without the index
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int sum = 0;
	dlistint_t *del;

	if (*head == NULL)
		return (-1);
	del = *head;
	for (sum = 0; sum < index; sum++)
	{
		if (del->next)
		{
			del = del->next;
		}
		else
		{
			return (-1);
		}
	}
	if (del == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = del->next;
		if (del->next)
		{
			del->next->prev = NULL;
		}
		free(del);
		return (1);
	}
	del->prev->next = del->next;
	if (del>next)
	{
		del->next->prev = del->prev;
	}
	free(del);
	return (1);
}
