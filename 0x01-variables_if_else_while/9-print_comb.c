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
for (dig = 48; dig <= 58; dig++)
{
putchar(dig);
putchar(32);
putchar(44);
}
return (0);
}
