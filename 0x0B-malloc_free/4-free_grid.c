#include "main.h"

/**
 * free_grid - Function that permits to make space available in a 2D grid.
 *
 * @grid: The grid to be cleared.
 * @height: The height of the grid to be cleared.
 *
 * Return: free grid.
 */

void free_grid(int **grid, int height)
{
	int spa = 0;

	if (spa < height)
	{
		spa++;
		free(grid[spa]);
	}
	free(grid);
}
