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
	unsigned int para;

	if (array == NULL || action == NULL)
		return;

	para = 0;

	while (para < size)
	{
		action(array[para]);
		para++;
	}

}
