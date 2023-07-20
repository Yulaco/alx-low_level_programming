#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Function prints numbers.
 *
 * @seperator: String to be printed between numbers.
 * @n: Numbers passed to function.
 *
 * Return: Nothing.
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int num;

	va_list print_num;

	va_start(print_num, n);

	num = 0;
	while (num < n)
	{
		if (seperator != NULL && num < n - 1)
			printf("%d%s", va_arg(print_num, int), seperator);

		else
			printf("%d", va_arg(print_num, int));

		num++;
	}
	va_end(print_num);

	printf("\n");
}
