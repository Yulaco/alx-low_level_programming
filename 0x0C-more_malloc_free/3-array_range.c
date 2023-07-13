#include "main.h"
#include <string.h>

/**
 * *array_range - Function that generates an array of integers.
 * @min: Least value in array.
 * @max: Greatest value in array.
 *
 * Return: Pointer of latest generated memory location.
 */

int *array_range(int min, int max)
{
	int *array;
	int t_manho, valor;

	if (min > max)
		return (NULL);

	t_manho = max - min + 1;

	array = malloc(t_manho * (sizeof(int)));

	if (array == NULL)
	return (NULL);

	valor = 0;

	while (min <= max)
	{
	++valor;
	array[valor] = ++min;
	}

	return (array);
}
