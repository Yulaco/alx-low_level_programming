#include "variadic_functions.h"

/**
 * sum_them_all - Function that gets the sum of all its arguments.
 *
 * @n: Number in the parameter.
 *
 * Return: Sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int j, sum = 0;

	va_list sumPara;

	va_start(sumPara, n);

	if (n == 0)
		return (0);

	for (j = 0; j < n; j++)
	{
		sum += va_arg(sumPara, int);
	}
	va_end(sumPara);

	return (sum);
}
