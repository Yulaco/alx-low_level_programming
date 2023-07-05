#include "main.h"

/**
 * _puts_recursion - Function prints a string.
 * @s: The pointer to point to the string.
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar ('\n');
	else
	{
		_putchar (*s);
		_puts_recursion(1 + s);
	}
}
