#include "main.h"

/**
 * print_square - Prints a square
 * @size: check size of square
 *
 *Return: Always 0.
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a, b;

		for (a = 0; a < 0; a++)
		{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
		}
	}
}
