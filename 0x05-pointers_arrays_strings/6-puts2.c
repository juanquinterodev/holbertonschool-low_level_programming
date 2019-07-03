#include "holberton.h"
/**
 * puts2  - Function prints in reverse
 * @s: pointer s
 *
 * Description: Takes a pointer
 * Updates  the value
 * Return: Always return 0
*/
void puts2(char *s)
{
int i = 0, j;
	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0 ; j <= (i - 1); j++)
	{
		if (j  % 2 == 0)
		_putchar(*(s + j));
	}
_putchar('\n');
}
