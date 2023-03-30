#include "main.h"

/**
 * reverse_array - Function that reverses an array integer.
 * @a: An array of integers.
 * @n: The number of elements to swap.
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
