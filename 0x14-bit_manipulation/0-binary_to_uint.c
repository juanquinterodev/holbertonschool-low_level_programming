#include "holberton.h"

/**
* binary_to_uint - converts a binary to an unsigned int
* @b: string binary number
* Return: a conversion value
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i = 0;
	int j = 1;

	if (b == NULL)
		return (0);

	while (b[i + 1] != '\0')
		i++;

	while (i >= 0)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		n += (b[i] - '0') * j;
		j *= 2;
		i--;
	}
	return (n);
}
