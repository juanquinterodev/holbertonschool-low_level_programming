#include "lists.h"
#include <stdlib.h>
/**
*free_listint2 - frees the lists
*@head: the list that will be free.
*/
void free_listint2(listint_t **head)
{
	listint_t *actual;
	listint_t *next;

	actual = *head;
	while (actual)
	{
		next = actual->next;
		free(actual);
		actual = next;
		*head = NULL;
	}
}
