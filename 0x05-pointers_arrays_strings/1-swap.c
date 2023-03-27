#include "main.h"

/**
 * swap_int - Function that swaps values of two integers
 * @a: values to swap
 * @b: values to swap
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int mySwap;

	mySwap = *a;
	*a = *b;
	*b = mySwap;
}
