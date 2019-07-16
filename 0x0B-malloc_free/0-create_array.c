#include <stdlib.h>
/**
 * create_array - create an array whit a specific char
 * @size: size
 * @c: character
 *
 * Return: pointer to array or null if fails.
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size > 0)
	{
		a = malloc(size * sizeof(c));
	}
	else
	{
		return (NULL);
	}

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);

}
