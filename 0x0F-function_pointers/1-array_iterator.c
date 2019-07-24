#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - iterator
 * @size: the size of the array
 * @array: pointer
 * @action: function to use
 *
 * Return: Nothing.
 */
void array_iterator(int *array, unsigned int size, void (*action)(int))
{
unsigned int n;
for (n = 0; n < size; n++)
{
action(array[n]);
}
}
