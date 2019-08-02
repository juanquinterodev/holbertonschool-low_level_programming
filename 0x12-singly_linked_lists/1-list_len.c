#include "lists.h"
#include <stdio.h>
/**
* print_list - prints all the elements of the list.
* @h: node parameter
* Return: size of list
*/
size_t list_len(const list_t *h)
{
size_t sum;
const list_t *p;

p = h;

if (p == NULL)
{
return (0);
}
for (sum = 0; p != NULL; sum++)
{
p = p->next;
}
return (sum);
}

