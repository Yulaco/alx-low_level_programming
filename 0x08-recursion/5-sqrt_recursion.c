#include "main.h"

/**
 * _sqrt_recursion - Function that returns the natural square root
 *of a number.
 * @n: Number to be square rooted.
 *
 * Return: 1.
 */
int _sqrt_recursion(int n)
{

	if (n == 0)
		return (0);

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (0);
	}
	{
		return (n * _sqrt_recursion(n + 1));
	}
}
