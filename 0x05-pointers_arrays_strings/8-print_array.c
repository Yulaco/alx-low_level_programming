#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers.
 * @a: Element to check.
 * @n: Element to check.
 *
 * Return: 0.
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
		if (b != n - 1)
			printf("%d, ", a[b]);
		else
			printf("%d", a[b]);
	printf("\n");
}

