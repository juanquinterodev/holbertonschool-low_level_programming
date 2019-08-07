#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
* pop_listint - del head node
*@head: first
*Return: The head nodes data n
*/
int pop_listint(listint_t **head)
{
int n;
listint_t *tmp;

	if (*head == NULL)
		return (0);
	tmp = *head;
	n = tmp->n;
	free(tmp);
	*head = (*head)->next;
	return (n);
}
