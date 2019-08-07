#include "lists.h"
/**
 * get_nodeint_at_index - return the nth node of a linked list
 * @head: pointer to first node
 * @index: index node will be return
 * Return: htn node of a linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;

while (i < index)
{
if (head->next == NULL)
return (NULL);
head = head->next;
i++;
}
return (head);
}
