#include "search_algos.h"
/**
* binary_search - searches a value in a sorted arrays
*
* @array: pointer to the first element
*
* @size: number of elements
*
* @value: value to search
*
* Return: the index or -1 if value is not present in array or
* if array is NULL
*/
int binary_search(int *array, size_t size, int value)
{
	unsigned int i = 0, first = 0, last = size - 1, m = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (1)
	{
		printf("Searching in array: ");

		for (i = first; i < last; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		if (first > last)
			return (-1);

		m = (first + last) / 2;

		if (value == array[m])
			return (m);

		else if (first == last)
			return (-1);

		else if (array[m] < value)
			first = m + 1;

		else
			last = m - 1;
	}
}
