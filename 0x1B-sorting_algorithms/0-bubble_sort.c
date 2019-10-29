#include "sort.h"
/**
* bubble_sort - sorts an array in ascending order
* @array: array of integers
* @size: size of the array
* Return: none
*/
void bubble_sort(int *array, size_t size)
{
	unsigned int i = 0, intvalid = 0;
	int aux = 0;

	if (array == NULL)
		return;

	for (intvalid = 0; intvalid < size - 1; intvalid++)
	{
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				aux = array[i];
				array[i] = array[i + 1];
				array[i + 1] = aux;
				print_array(array, size);
			}
		}
	}
}
