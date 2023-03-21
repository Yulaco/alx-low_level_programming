#include "main.h"

/**
 * main - Prints the sign of a number.
 *
 * Return: 1 nuber greater than 0, 0  number zeru, -1 number less than zero..
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n = 0)
	{
		_putchar(48);
		return (0);
	}
	else (n < 0)
	{
		_putchar(45);
		return (-1);
	}
}
