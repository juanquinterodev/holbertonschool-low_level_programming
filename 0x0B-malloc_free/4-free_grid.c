#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* free_grid - free a 2 dimensional grid
* @grid: grid of integer
* @height: height of the grid
*
* Return: Nothing
*/
void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
	{
		free(grid[n]);
	}
	free(grid);
}
