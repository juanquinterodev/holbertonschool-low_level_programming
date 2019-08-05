#include "lists.h"
#include <stdlib.h>
/**
* listint_len - returns numbers of elements of the list.
* @h: node parameter
* Return: size of list
*/
size_t listint_len(const listint_t *h)
{
size_t sum;
const listint_t *p;

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
