#include "holberton.h"
/**
 * print_line - print line
 * @n: number of lines
 *
 * Return: no argument.
 */
void print_line(int n)
{
while (n > 0)
{
_putchar(95);
n--;
}
_putchar('\n');
}
