#include "function_pointers.h"

/**
 * int_index - Retrieves index of 1st element when cmp does not get back 0.
 *
 * @array: An array.
 * @size: Collection of numbers in the array array.
 * @cmp: Points to the function and is used to contrast values.
 *
 * Return: 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int val_search;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (val_search = 0; val_search < size; val_search++)
	{
		if (cmp(array[val_search]))
			return (val_search);
	}
	return (-1);
}
