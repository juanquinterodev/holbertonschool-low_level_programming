#include <stdlib.h>
#include "holberton.h"
/**
 * str_concat - concatenates two strings
 * @s1: string give
 * @s2: string give
 *
 * Return: pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
	char *c;
	int i, j, x = 0;
	int aux = 0, c1 = 0, c2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[c1] != '\0')
	{
		c1++;
	}
	while (s2[c2] != '\0')
	{
		c2++;
	}
	aux = c1 + c2 + 1;

	c = (char *) malloc(aux * sizeof(char));
	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < c1; i++)
	{
		c[i] = s1[i];
	}
	for (j = i; j <= aux; j++)
	{
		c[j] = s2[x];
			x++;
	}
		return (c);
}
