#include "main.h"

/**
 * _print_rev_recursion - Function prints a string in reverse.
 * @s: The pointer to point to the string to be reverse.
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(1 + s);
		_putchar(*s);
	}
}

