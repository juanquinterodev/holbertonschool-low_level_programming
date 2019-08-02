#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
* _strlen - size string
* @s: character pointer
*
* Return: size string
*/
int _strlen(char *s)
{
	int sum;

	for (sum = 0; *s != '\0'; sum++)
	{
		;
	}
	return (sum);
}
/**
* add_node - add nodes at the end
*@head: first
*@str: string to be updated
*Return: The address node
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *buf;

if (head == NULL)
{
return (NULL);
}
buf = *head;
buf = malloc(sizeof(list_t));
if (buf != NULL)
{
return (NULL);
}
buf->str = strdup(str);
if (buf->str == NULL)
{
free(buf);
}
buf->len = _strlen(buf->str);
buf->next = *head;
*head = buf;
return (buf);
}
