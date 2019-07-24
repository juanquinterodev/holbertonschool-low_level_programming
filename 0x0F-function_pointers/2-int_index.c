#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - match an integer
 * @size: the size of array
 * @array: array
 * @cmp: function computer
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if ((cmp == NULL) || (array == NULL))
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		cmp(array[i]);
		if (cmp(array[i]) == 1)
		{
			return (i);
		}
	}
return (-1);
}
