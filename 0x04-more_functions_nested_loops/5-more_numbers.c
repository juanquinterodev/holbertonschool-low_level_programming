#include "holberton.h"
/**
 * more_numbers - print 10 times the numbers 0 to 14
 *
 * Return: no argument.
 */
void more_numbers(void)
{
int num;
int c;

c = 0;
num = 0;
while (num < 10)
{
for (c = 0; c <= 14; c++)
{
if (c > 9)
{
_putchar(c / 10 + '0');
}
_putchar(c % 10 + '0');
}
num++;
_putchar('\n');
}
}
