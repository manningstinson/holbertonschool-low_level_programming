#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 *
 * @grid: pointer to the 2D array
 * @height: height of grid
 *
 */

void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL)
		return;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
