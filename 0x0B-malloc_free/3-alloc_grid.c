#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - Function returns a pointer to a 2 dimensional array of int
 * @width: Number of columns
 * @height: Number of rows
 *
 * Return: Pointer to the memory address of the array or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if ((width < 1) || (height < 1))
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
			j = 0;
			while (j <= i)
			for (j = i; j >= 0; j--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
