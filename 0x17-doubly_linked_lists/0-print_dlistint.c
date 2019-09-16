#include "lists.h"
/**
* print_dlistint - prints all the elements of the list.
* @h: the paremeter list.
*
* Return: the number of nodes.
*/
size_t print_dlistint(const dlistint_t *h)
{
int sum = 0;

if (h == NULL)
{
return (sum)
}
for (sum = 0; h != NULL; sum++)
{
printf("%d\n", h->n);
h = h->next;
}
return (sum);
}
