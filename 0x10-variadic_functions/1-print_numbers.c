#include "variadic_functions.h"

/**
 * print_numbers - Function that prints digits.
 *
 * @separator: String displayed between digits.
 * @n: Figures passed to function.
 *
 * Return: 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j;

	va_list numPrint;

	va_start(numPrint, n);

	for (j = 0; j < n; j++)
	{
		if (separator == 0)
			printf("%d%s", va_arg(numPrint, int), separator);

		else
			printf("%d", va_arg(numPrint, int));
	}

	printf("\n");

	va_end(numPrint);
}
