#include "holberton.h"

/**
 * print_triangle - print triangle characters
 *
 * @size: size a triangle
 *
 * Return: Always 0 (Success)
 */

void print_triangle(int size)
{
int i, j;

for (i = size; i > 0; i--)
{
	for (j = 0; j <= size; j++)
	{
		if (i > j)
		{
			if (j == 0)
			{
			}
			else
			_putchar(' ');
		}
		else
		_putchar('#');
	}
_putchar('\n');
}
if (size <= 0)
_putchar('\n');
}
