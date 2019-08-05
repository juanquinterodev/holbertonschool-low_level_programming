#include "lists.h"
#include <stdlib.h>
/**
* add_nodeint_end - adds a new node at the end of a list.
*@head: first node of the list
*@n: number to add
*
*Return: the address of the new node, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *tmp;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
if (*head == NULL)
*head = new;
else
{
tmp = *head;
while (tmp->next != NULL)
tmp = tmp->next;
tmp->next = new;
}
return (new);
}
