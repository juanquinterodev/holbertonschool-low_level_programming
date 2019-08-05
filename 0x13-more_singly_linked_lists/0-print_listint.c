#include "lists.h"
#include <stdio.h>
/**
* print_listint - print all the elements of a list
* @h: node parameter
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
unsigned int sum;
const listint_t *p;

p = h;

for (sum = 0; p != NULL; sum++)
{
printf("%d\n", p->n);
p = p->next;
}
return (sum);
}
