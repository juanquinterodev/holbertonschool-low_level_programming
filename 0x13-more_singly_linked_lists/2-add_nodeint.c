#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
* add_nodeint - add nodes at the beginning
*@head: first
*@n: number
*Return: The address node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = *head;
*head = new;
return (new);
}

