#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - Function prints character.
 * @arg: List of arguments.
 */
void print_char(va_list arg)
{
	char letra;

	letra = va_arg(arg, char);
	printf("%c", letra);
}

/**
 * print_int - Function prints integer.
 * @arg: List arguments.
 */
void print_int(va_list arg)
{
	int numero;

	numero va_arg(arg, int);
	printf("%d", numero);
}

/**
 * print_float - Function prints float.
 * @arg: List of arguments.
 */
void print_float(va_list arg)
{
	float value;

	value = va_arg(arg, double);
	printf("%f", value);
}

/**
 * print_string - Function prints string.
 * @arg: List of arguments.
 */
void print_string(va_list arg)
{
	char *ptr_string;

	ptr_string = va_arg(arg, char *);
	if (ptr_string == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", ptr_string);
}
/**
 * print_all - Function prints anything.
 *
 * @format: Different types of parameters passed to the function.
 * @...: Number of parameters.
 * @separator: Strings to print.
 *
 * Return: 0.
 */
void print_all(const char * const format, ...)
{
	va_list list_arg;
	char *separator = "";
	int cont1 = 0, cont2 = 0;

	show_list f[] = {
		{"s", print_string},
		{"i", print_int},
		{"c", print_char},
		{"f", print_float},
	};
	va_start(list_arg, format);

	while (format && (*(format + cont1)))
	{
		cont2 = 0;

		while (cont2 < 4 && (*(format + cont1) != *(f[cont2].symbol)))
			cont2++;

		if (cont2 < 4)
		{
			printf("%s", separator);
			f[cont2].f(list_arg);
		separator = ", ";
		}
		cont1++;
	}

	printf("\n");

	va_end(list_arg);

}
