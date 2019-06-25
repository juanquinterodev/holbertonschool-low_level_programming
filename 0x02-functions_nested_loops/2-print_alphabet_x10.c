#include "holberton.h"
/**
 * print_alphabet_x10 - print 10 times the alphabet
 *
 * Return: no argument.
 */
void print_alphabet_x10(void)
{
int num;
char c;

num = 0;
while (num < 10)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
num++;
_putchar('\n');
}
}
