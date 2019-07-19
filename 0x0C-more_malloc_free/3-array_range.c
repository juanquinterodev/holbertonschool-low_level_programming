#include <stdlib.h>
#include "holberton.h"
/**
 * array_range - create an array of integers
 * @min: parameter give
 * @max: parameter give
 *
 * Return: pointer to int
 */

int *array_range(int min, int max)
{
int *p;
int i;
if (min > max)
return (NULL);
p = malloc((sizeof(int)) * ((max - min) + 1));
if (p == NULL)
return (NULL);
else
{
for (i = 0; i < ((max - min) + 1); i++, min++)
{
p[i] = min;
}
return (p);
}
}
