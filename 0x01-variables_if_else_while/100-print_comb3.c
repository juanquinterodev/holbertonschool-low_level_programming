#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num1, num2;

for (num1 = 0; num1 < 10; num++)
{
for (num2 = 0; num2 < 10; num2++)
{
if (num1 >= num2)
continue;
else
putchar ((num1 % 10) + '0');
putchar ((num2 % 10) + '0');
if (num1 == 8 && num2 == 9)
{
}
else
{
putchar (',');
putchar (' ');
}
}
}
putchar('\n');
return (0);

