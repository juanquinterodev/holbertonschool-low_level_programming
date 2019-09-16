#include "lists.h"
/**
* get_dnodeint_at_index - returns nth element of the list.
*@head: the list.
*@index: the number.
*Return: the nth nodef.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int sum = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	for (sum = 0; sum < index; sum++)
	{
		if (head)
		{
			head = head->next;
		}
		else
		{
			return (NULL);
		}
	}
	return (head);
}
