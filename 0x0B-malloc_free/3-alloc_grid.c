#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -a function that  creates a two dimensional int grid
 * @height: number of rows
 * @width: number of column
 * Return: pointer to grid or null
 **/

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if (width < 1 || height < 1)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			while (--i >= 0)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
