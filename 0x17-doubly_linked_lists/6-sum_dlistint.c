#include "lists.h"
/**
* sum_dlistint - returns sum the elements n of the list.
*@head: the list.
*Return: the sum of nodes.
*/
int sum_dlistint(dlistint_t *head)
{
	unsigned int c = 0;
	int sum = 0;

	if (head == NULL)
	{
		return (sum);
	}
	for (c = 0; head != NULL ; c++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
