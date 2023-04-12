#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - A task that gets back a stored address
 * to a two dimensional array of integers.
 * @width: The breadth of the grid.
 * @height: The verstical position of the grid.
 *
 * Return: val_pointer.
 */
int **alloc_grid(int width, int height)
{
	int **val_pointer;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);
	val_pointer = malloc(sizeof(int *) * height);

	if (!val_pointer)
		return (NULL);

	for (a = 0; a < height; a++)
	{
	val_pointer[a] = malloc(sizeof(int) * width);
	if (!val_pointer[a])
		return (NULL);
	for (b = 0; b < width; b++)
	val_pointer[a][b] = 0;
	}
	return (val_pointer);
}
