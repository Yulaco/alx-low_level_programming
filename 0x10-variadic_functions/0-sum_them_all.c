#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - Function that gets the sum of all its arguments.
 *
 * @n: Number of arguments.
 *
 * Return: Sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int a, sum = 0;

	va_list sum_par;

	va_start(sum_par, n);

	if (n == 0)
		return (0);

	a = 0;
	while (a < n)
	{
		sum += va_arg(sum_par, int);
		a++;
	}
	va_end(sum_par);

	return (sum);
}
