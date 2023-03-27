#include "main.h"

/**
 * _puts - Function that prints a string.
 *@str: String value.
 *
 * Return: Prints a string..
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
