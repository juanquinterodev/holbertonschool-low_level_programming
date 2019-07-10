#include "holberton.h"
/**
 * *_strchr - locates a character in a string
 *
 * @s: pointer
 *
 * @c: character
 *
 * Return: string
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}

	if (*(s + i) == c)
	{
		return (s + i);
	}
	else
	{
		return ('\0');
	}
}
