#include "function_pointers.h"

/**
 * array_iterator - Function runs a function given
 * as a parameter on each array of elements.
 *
 * @array: The integer array.
 * @size: The size of the array.
 * @action: The pointer pointing to a function.
 *
 * Return: 0.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int arr_size;

	if (array == NULL && action == NULL)
		return (0);

	int arr_size = 0;

	while (arr_size < size)
	{
		action(array[arr_size]);
		arr_size++;
	}

}
