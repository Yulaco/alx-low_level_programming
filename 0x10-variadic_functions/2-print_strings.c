#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Function prints string.
 *
 * @separator: String displayed between strings.
 * @n: Number of strings run to the function.
 *
 * Return: 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;

	char *ptr_str;

	va_list print_string;

	va_start(print_string, n);

	a = 0;

	while (a < n)
	{
		ptr_str = va_arg(print_string, char *);

		if (ptr_str == NULL)
			printf("(nil)");

		else
			printf("%s", ptr_str);

		if (separator != NULL && a < n - 1)
			printf("%s", separator);

		a++;
	}
	va_end(print_string);
	printf("\n");

}
