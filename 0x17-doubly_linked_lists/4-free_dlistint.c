#include "lists.h"
/**
*free_dlistint - frees all the list
*@head: the head that will be given
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
	head = NULL;
}
