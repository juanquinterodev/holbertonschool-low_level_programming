#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *_strlen - length of string
 *
 *@s: variable give
 *Return: value size
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}
/**
*add_node_end - add nodes at the end
*@head: first
*@str: string that will be update
*Return: The address node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int sum;
	list_t *p;
	list_t *buf;

	buf = malloc(sizeof(list_t));
	if (buf == NULL)
	{
		return (NULL);
	}

	buf->str = strdup(str);
		if (buf->str == NULL)
		{
			free(buf);
		}
	buf->len = _strlen(buf->str);
	buf->next = NULL;

	if (*head == NULL)
	{
		*head = buf;
		return (*head);
	}
	p = *head;

	for (sum = 0; p->next != NULL; sum++)
	{
		p = p->next;
	}
	p->next = buf;
	return (*head);
}
