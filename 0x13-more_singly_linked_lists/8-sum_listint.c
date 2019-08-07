#include "lists.h"
#include <stdio.h>
/**
* print_listint - print all the elements of a list
* @h: node parameter
* Return: number of nodes
*/
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *p;

p = head;

for ( ; p != NULL; )
{
sum = sum + p->n;
p = p->next;
}
return (sum);
}
