#include "holberton.h"
/**
 * print_sign - prints the sign of a number
 * @n: num to evaluate
 *
 * Return: 1 if n is greater than zero, 0 if n is zero, -1 if negative
 */
int print_sign(int n)
{
int c;
if (n > 0)
{
_putchar('+');
c = 1;
}
else
{
if (n < 0)
{
_putchar('-');
c = -1;
}
else
{
_putchar('0');
c = 0;
}
}
return (c);
}
