#include "main.h"

/**
 * _pow_recursion - Function returns the value of x
 * raised to the power of y.
 * @x: The value to be returned.
 * @y: The power of the input.
 *
 * Return: 0.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
	return (1);
	}
	else if (y < 0)
	{
	return (-1);
	}
	else
	{
		return (x* _pow_recursion (x, y - 1));
	}
}
