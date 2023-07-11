#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid previously created
 * @grid: This is the 2D grid to be freed
 * @height: This is the height of the grid
 * Return: This function returns nothing
 */
void free_grid(int **grid, int height)
{
	int index;

	if (grid == NULL || height <= 0)
		return;

	while (index < height)
	{
		free(grid[index]);
		index++;
	}
	free(grid);
}
