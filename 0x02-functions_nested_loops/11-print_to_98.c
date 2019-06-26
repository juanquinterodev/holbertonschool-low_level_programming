#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - Prints the numbers from n to 98
 * @n: Number to start loop
 * Return: Printed secuency
 */

void print_to_98(int n)
{
	int num;

	num = n;

	while (n <= 98)
	{
		if (n != 98 && n < 0)
		{
			printf("%d, ", n);
		} else if (n != 98 && n >= 0)
		{
			printf("%d, ", n);
		} else if (n == 98)
			printf("%d\n", n);
		n++;
	};


	while (num >= 98)
	{
		if (num > 98)
		{
			printf("%d, ", num);
		} else
			printf("%d\n", num);
		num--;
	}
}
