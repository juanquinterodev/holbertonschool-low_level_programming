#include "holberton.h"
/**
 * print_rev  - prints in reverse
 * @s: pointer s
 *
 * Description: Takes a pointer
 * Updates  the value
 * Return: Always return 0
*/
void print_rev(char *s)
{
int i = 0, j;
	while (s[i] != '\0')
	{
		i++;
	}
	for (j = (i - 1); j >= 0; j--)
	{
		_putchar(s[j]);
	}
_putchar('\n');
}
