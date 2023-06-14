#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Function returns a pointer to a 2 dimensional array of int
 * @width: Number of columns
 * @height: Number of rows
 *
 * Return: Pointer to the memory address of the array or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}

	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			grid[k][l] = 0;
		}
	}

	return (grid);
}
