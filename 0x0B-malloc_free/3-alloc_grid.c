#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Returns pointer to a 2D array
 * @width: This is the width of the grid
 * @height: This is the height of the grid
 * Return: Returns pointer to allocated 2D grid, or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **grid;

	if (width <= 0 || height <= 0)
	return (NULL);

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (; i >= 0; i--)
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
