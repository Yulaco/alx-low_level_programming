#include "function_pointers.h"

/**
 * int_index - Function searches for an integer.
 *
 * @array: An array.
 * @size: Collection of numbers in the array.
 * @cmp: Points to the function and is used to compare values.
 *
 * Return: -1 if no match, if size less than equal to 0 return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int search;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (search = 0; search < size; search++)
	{
	if (cmp(array[search]))
		return (search);
	}
	return (-1);
}
