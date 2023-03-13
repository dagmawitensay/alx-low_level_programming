#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid- function to allocate memory to a grid
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to the grid
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int __attribute__ ((unused)) i;
	int __attribute__ ((unused)) j;


	if (width < 1 || height < 1)
		return (NULL);

	grid = malloc(height * sizeof(int));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (i-- ; i >= 0; i++)
			{
				free(grid[i]);
				free(grid);
				return (NULL);
			}
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
