#include "lists.h"
#include <stdlib.h>
/**
*free_list - frees the lists
*@head: the list that will be freed.
*/
void free_list(list_t *head)
{
	list_t *buf;
	list_t *p;

	buf = head;
	while (buf)
	{
		p = buf->next;
		free(buf->str);
		free(buf);
		buf = p;
	}
	head = NULL;
}
