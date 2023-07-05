#include "main.h"

/**
 * factorial - Function that gets the factorial number.
 * @n: The factorial number to get.
 * Return: When n less than 0, return -1 indicates an error.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	else
		return (n * factorial(n - 1));
}
