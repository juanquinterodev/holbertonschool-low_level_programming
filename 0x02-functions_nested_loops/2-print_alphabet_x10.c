#include "holberton.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times
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
num ++;
_putchar('\n');
}
}
