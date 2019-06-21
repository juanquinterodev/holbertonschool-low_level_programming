#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2, num3;

	for (num1 = 0; num1 < 10; num1++)
	{
	for (num2 = 0; num2 < 10; num2++)
	{
	for (num3 = 0; num3 < 10; num3++)
	{
	if (num1 == num2 || num1 == num3 || num2 == num3
|| num1 > num2 || num2 > num3 || num1 > num3)
	continue;
	else
	putchar ((num1 % 10) + '0');
	putchar ((num2 % 10) + '0');
	putchar ((num3 % 10) + '0');
	if (num1 == 7 && num2 == 8 && num3 == 9)
	{
	}
	else
	putchar (',');
	putchar (' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
