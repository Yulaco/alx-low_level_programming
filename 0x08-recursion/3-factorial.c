#include "main.h"

/**
 * factorial - Function which returns the factorial of a given number.
 * @n: The factorial value to be returned.
 *
 * Return: 0.
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
	{
		return (0);
	}
}
