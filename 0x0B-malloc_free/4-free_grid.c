#include <stdlib.h>
#include "main.h"
/**
 * free_grid - fress memory
 * @grid: pointer to the grid
 * @height: heightof the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

