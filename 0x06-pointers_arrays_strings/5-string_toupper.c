#include "holberton.h"
/**
* *string_toupper - changes all lowercase letters to uppercase
*@c: string to change
*Return: string changed
*/
char *string_toupper(char *c)
{
	int u;

	for (u = 0; c[u] != '\0'; u++)
	{
		if (c[u] >= 'a' && c[u] <= 'z')
			c[u] = c[u] - 32;
	}
	return (c);
}
