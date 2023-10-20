#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates a 2D Array of integers, initailized to 0
 *
 * @width: width of an integer
 * @height: height of integer
 *
 * Return: pointer to the new allocated grid, or NULL on failure
 *
 */

int **alloc_grid(int width, int height)
{

	int a, b;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid  = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		grid[a] = (int *)malloc(sizeof(int) * width);
		if (grid[a] == NULL)
		{
			for (b = 0; b < a; b++)
				free(grid[b]);
		}
		free(grid);
		return (NULL);
	}
	for (b = 0; b < width; b++)
	{
		grid[a][b] = 0;
	}

	return (grid);
}
