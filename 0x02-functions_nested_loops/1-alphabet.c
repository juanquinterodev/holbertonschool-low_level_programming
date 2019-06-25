#include "holberton.h"

/**
  * print_alphabet - print the alphabet in lowercase
  * @void: no argument
  **/
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
