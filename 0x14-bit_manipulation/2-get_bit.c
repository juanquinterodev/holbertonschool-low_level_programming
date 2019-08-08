#include "holberton.h"
/**
* get_bit - returns the value of a bit at a given index
* @n: number to valid
* @index: is the index, starting from 0 of the bit you want to get
* Return: the value of the bit at index or -1 if an error
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	n >>= index;
	if ((n & 1) == 1)
		return (1);
	else
		return (0);
}
