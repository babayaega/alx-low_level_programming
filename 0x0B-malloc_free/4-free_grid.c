#include "main.h"
#include <stdlib.h>

/**
 * free_grid - releases memory held by a previously created 2d integer grid
 * @grid: pointer to an array of integers
 * @height: input number of rows in grid
 * Return: nothing
 **/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
