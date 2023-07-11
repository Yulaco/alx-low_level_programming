#include "main.h"


/**
 * **alloc_grid - function gets back a stored address
 * to a two dimensional array of integers
 * @width: breadth of the grid
 * @height: vertical position of the grid
 *
 * Return: val_ptr
 */
int **alloc_grid(int width, int height)
{
	int **val_ptr;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	val_ptr = malloc(height * sizeof(int *));

	if (!val_ptr)

	return (NULL);

	for (a = 0; a < height; a++)
	{
	val_ptr[a] = malloc(width * sizeof(int));

	if (!val_ptr[a])
		return (NULL);

	for (b = 0; b < width; b++)
		val_ptr[a][b] = 0;
	}
	return (val_ptr);
}
