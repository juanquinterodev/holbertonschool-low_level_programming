#include "holberton.h"
/**
* set_bit - sets the value of a bit to 1 at a given position
*@n: number will be changed
*@index: index starting from 0 of the bit you want to set
*Return: 1 if it worked or -1 an error
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index <= 64)
	{
		m = 1 << index;
		*n = *n | m;
		return (1);
	}
	return (-1);
}
