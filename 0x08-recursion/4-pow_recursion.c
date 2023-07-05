/**
 * _pow_recursion - Function that gets the value of x raised to the power of y.
 * @x: The value raised to the power of y.
 * @y: The power.
 * Return: When y less than 0, return -1.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	else
		return (x * _pow_recursion(x, y - 1));
}
