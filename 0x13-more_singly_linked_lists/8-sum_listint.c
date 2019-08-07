#include "lists.h"
#include <stdio.h>
/**
* sum_listint - sumatory all the elements of a list
* @head: node parameter
* Return: sum of nodes
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
