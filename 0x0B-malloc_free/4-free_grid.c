#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Function frees a 2 dimensional array that is dynamically
 * allocated on memory
 * @grid: Array of pointers
 * @height: height of the array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
