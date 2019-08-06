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

	if (head != NULL && *head != NULL)
	{
		actual = *head;
		while (actual)
		{
		next = actual->next;
		actual->next = NULL;
		free(actual);
		actual = next;
		}
	}
	*head = NULL;
}
