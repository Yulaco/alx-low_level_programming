#include "main.h"
#include <stdlib.h>

/**
 * *array_range - Function that generates an array of whole numbers.
 *
 * @min: Least value in array.
 * @max: Greatest value in array.
 *
 * Return: Pointer of latest generated location.
 */

int *array_range(int min, int max)
{
	int *ray;
	int size, val;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ray = malloc(size * (sizeof(int)));

	if (ray == NULL)
		return (NULL);

	val = 0;

	do {
	ray[val] = min++;
	} while (min <= max && ++val);

	return (ray);
}

