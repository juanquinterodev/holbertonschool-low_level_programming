#include <stdlib.h>
#include "holberton.h"
/**
*_calloc - calloc function
*@nmemb: element
*@size: size of the element
*Return: my family please
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int c;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	s = malloc(nmemb * size);
	if (s == NULL)
	{
		return (NULL);
	}
	for (c = 0; c < (nmemb * size); c++)
	{
		s[c] = 0;
	}
	return (s);
}
