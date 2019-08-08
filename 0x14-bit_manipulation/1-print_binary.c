#include "holberton.h"
/**
* print_binary - prints a number in binary
*@n: number gived
*Return: Nothing
*/
void print_binary(unsigned long int n)
{
	unsigned long int i = 2;
	unsigned int count = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n == 1)
	{
		_putchar('1');
		return;
	}

	while (i <= n && count < 62)
	{
		i <<= 1;
		count++;
	}

	if (count != 62)
		i >>= 1;

	while (i != 0)
	{
		if ((i & n) != 0)
		{
			count++;
			_putchar('1');
		}
		else
		{
			count++;
			_putchar('0');
		}
		i >>= 1;
	}
}
