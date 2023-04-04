#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Function that prints sum of two diagonals
 * of a square.
 * @a: the name of the array
 * @size: the size of the array
 * Return 0.
 */
void print_diagsums(int *a, int size)
{
	int num = 0;
	int num1 = size - 1;
	int sum1 = 0;
	int sum2 = 0;

	while (num <= (size * size))
	{
		sum1 = sum1 + a[num];
		num = num + size + 1;
	}

	while (num1 < (size * size - 1))
	{ sum2 += a[num1];
		num1 = num1 + size - 1;
	}

	printf("%d, %d\n", sum1, sum2);
}
