#include "main.h"

/**
 * free_grid - function that permits to make space available in a 2D grid
 *
 * @grid: grid to be cleared
 * @height: height of grid to be cleared
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int clean_grid = 0;

	while (clean_grid < height)
	{
		clean_grid++;
		free(grid[clean_grid]);
	}
	free(grid);
}
