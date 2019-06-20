#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry Point
 *
 * Prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int dig;
for (dig = '0'; dig <= '9'; dig++)
{
putchar(dig);
}
putchar('\n');
return (0);
}
