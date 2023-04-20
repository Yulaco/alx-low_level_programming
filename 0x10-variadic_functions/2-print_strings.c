#include "variadic_functions.h"

/**
 * print_strings - Function that displays a sequence of characters.
 *
 * @separator: String displayed between strings.
 * @n: Number of strings run to the function.
 *
 * Return 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int j;

	va_list printStr;

	va_start(printStr, n);

	for (j = 0; j < n; j++)
	{
		if (separator)
		{
			if (!va_arg(printStr, char *))
				printf("(nil)%s", separator);

			else
				printf("%s%s", va_arg(printStr, char *), separator);
		}

		else

		{
			if (va_arg(printStr, char *))
				printf("(nil)");

			else
				printf("%s", va_arg(printStr, char *));
		}

	}
	printf("%s", va_arg(printStr, char *));
	printf("\n");
	va_end(printStr);
}
