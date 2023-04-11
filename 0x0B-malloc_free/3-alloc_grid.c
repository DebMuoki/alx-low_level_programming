#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function that returns  pointer to a 2D array of integers
 * @width: width of array
 * @height: height of array
 * Return:  pointer to the array if successful else NULL.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int p, k;

	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
	return (NULL);
	}

	for (p = 0; p < height; p++)
	{
	grid[p] = (int *)malloc(width * sizeof(int));
	if (grid[p] == NULL)
	{
	for (k = 0; k < p; k++)
	{
	free(grid[k]);
	}
	free(grid);
	return (NULL);
	}

	for (k = 0; k < width; k++)
	{
	grid[p][k] = 0;
	}
	}

	return (grid);
}

