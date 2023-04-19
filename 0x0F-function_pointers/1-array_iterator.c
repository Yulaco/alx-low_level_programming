#include "function_pointers.h"

/**
 * array_iterator - Function that implements a function set as a parameter
 * on each element of an array.
 *
 * @array: An array.
 * @size: Indicates the size of the array.
 * @action: Pointer which points to function.
 *
 * Return: void.
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t arr_siz = 0;

	if (array == NULL && action == NULL)

	while (arr_siz < size)
	{
		action(array[arr_siz]);
		arr_siz++;
	}
}
