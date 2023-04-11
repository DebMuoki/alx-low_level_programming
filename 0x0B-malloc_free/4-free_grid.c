#include "main.h"
#include <stdlib.h>
/**
  * free_grid - function that frees a 2d grid previously created
  * @grid: the 2d grid to be freed
  * @height: height of grid to be freed
  *Return: void
  */

void free_grid(int **grid, int height)
{
	int m;

	if (grid != NULL)
	{
		for (m = 0; m < height; m++)
		{
			free(grid[m]);
		}

		free(grid);
	}

}
