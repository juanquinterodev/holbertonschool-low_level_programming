#include "holberton.h"
#include <stdio.h>
/**
 * _strlen  - pointer to an int
 * @s: pointer s
 *
 * Updates  the value
 * Return: 0
*/
int _strlen(char *s)
{
int i = 0;
	while (s[i] != '\0')
	{
		i ++;
	}
return (i);
}
