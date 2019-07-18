#include <stdlib.h>
#include "holberton.h"
/**
 * _strlen - lenght string
 * @s: string give
 *
 * Return: counter
 */

int _strlen(char *s)
{
	int cont;

	for (cont = 0; *s != '\0'; s++)
	{
		cont++;
	}
	return (cont);
}

/**
* string_nconcat - concatenates two string
* @s1: string 1
* @s2: string 2
* @n: lenght to concatenate
*
* Return: pointer to new string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int cs1;
	unsigned int cs2;
	unsigned int cou, cpy;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	cs1 = _strlen(s1);
	cs2 = _strlen(s2);
	if (n >= cs2)
	{
		n = cs2;
	}
	s = malloc((cs1 + n) * sizeof(char) + 1);
	if (s == NULL)
	{
		return (NULL);
	}

	for (cou = 0; cou < cs1; cou++)
	{
		s[cou] = s1[cou];
	}
	for (cpy = 0; cpy < n; cpy++)
	{
		s[cou + cpy] = s2[cpy];
	}

	s[cou + cpy] = '\0';
	return (s);
}
