#include "lists.h"
#include <stdio.h>
/**
* print_list - prints all the elements of the list.
* @h: node parameter
* Return: size of list
*/
size_t print_list(const list_t *h)
{
unsigned int sum;
const list_t *p;

p = h;

for (sum = 0; p != NULL; sum++)
{
if (p->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", p->len, p->str);
}
p = p->next;
}
return (sum);
}

