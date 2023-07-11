#include "main.h"

/**
 * free_grid - function that permits to make space available in a 2D grid
 *
 * @grid: grid to be cleared
 * @height: height of grid to be cleared
 *
 * Return: free grid
 */
void free_grid(int **grid, int height)
{
	int clean_grid = 0;

	if (clean_grid < height)
	{
		clean_grid++;
		free(gird[clean_grid]);
	}
	free(grid);
}
