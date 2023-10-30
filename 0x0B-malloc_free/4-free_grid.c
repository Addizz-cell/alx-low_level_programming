#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid previously created by alloc_grid
 * @grid: the 2D grid to be freed
 * @height: the height of the grid
 *
 * Return: No return value
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
