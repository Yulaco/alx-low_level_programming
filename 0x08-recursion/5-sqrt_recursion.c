#include "main.h"
/**
 * sqrt_val - Function that checks the value.
 * @n: The value to be square rooted.
 * @square: The value to check.
 * @square: Check value.
 * Return: Square root.
 */
int sqrt_val(int n, int square)
{
	if (n * n == square)
		return (n);
	
	else if (n * n > square)
		return (-1);

	else
		return (sqrt_val(n + 1, square));
}

/**
 * _sqrt_recursion - Function that gets the natural square root of a number.
 * @n: The value to be square rooted.
 * Return: When square root of n does not exist, return -1.
 */
int _sqrt_recursion(int n)
{
		return (sqrt_val(1, n));
}
