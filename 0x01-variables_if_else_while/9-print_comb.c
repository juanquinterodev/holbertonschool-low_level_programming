#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry Point
 *
 * Prints the digit combination
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int dig;
for (dig = 48; dig <= 57; dig++)
{
putchar(dig);
if (dig != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
