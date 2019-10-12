#include "hash_tables.h"
/**
* *hash_table_create - creates a hash table
*
* @size: size of the array
*
* Return: pointer to the new hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = NULL;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	new = malloc(sizeof(hash_table_t));

	if (new == NULL)
		return (NULL);

	new->size = size;
	new->array = malloc(sizeof(hash_node_t *) * size);

	if (new->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		new->array[i] = NULL;

	return (new);
}
