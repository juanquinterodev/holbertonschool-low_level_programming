#include "holberton.h"

/**
  * print_most_numbers - print the numbers 0 to 9 without 4 and 2
  * @void: no argument
  */
void print_most_numbers(void)
{
char c;
for (c = '0'; c <= '9'; c++)
{
if ((c == '2') || (c == '4'))
{
continue;
}
else
{
_putchar(c);
}
}
_putchar('\n');
}
