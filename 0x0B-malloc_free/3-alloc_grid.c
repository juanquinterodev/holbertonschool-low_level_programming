#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Allocates memory in a 2 dimensional array of int
 *
 * @width: columns.
 * @height: height.
 *
 * Return: Returns the created array.
**/

int **alloc_grid(int width, int height)
{

int i, j;
int **ag;

if (width <= 0 || height <= 0)
	return (NULL);

ag = malloc(height * sizeof(int *));

if (ag == NULL)
	return (NULL);
else
{
	for (i = 0; i < height; i++)
	{
		ag[i] = malloc(width * sizeof(int));

		if (ag[i] == NULL)
		{
			for (j = i; j >= 0; j--)
				free(ag[j]);
		free(ag);
		return (NULL);
		}

	for (j = 0; j <= i; j++)
		ag[i][j] = 0;
	}

return (ag);
}
}
