#include "holberton.h"
/**
* clear_bit - Function that sets the value of a bit to 0 at a given index
*@n: number will be convert
*@index: index, starting from 0 of the bit you want to set
*Return: 1 if it worked or -1 if an error
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index <= 64)
	{
		m = 1 << index;
		*n &= ~m;
		return (1);
	}
	return (-1);
}
