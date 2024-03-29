#include "main.h"

/**
 * print_binary - Function prints binary representation of a number.
 *
 * @n: Number to print in binary.
 *
 * Return: 0.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar ((n & 1) + '0');
}
