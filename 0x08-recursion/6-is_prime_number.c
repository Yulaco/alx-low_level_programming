#include "main.h"

/**
 * is_prime_number - Function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: Checks the prime number.
 *
 * Return: 1 for prime number, 0 for non prime number.
 */
int is_prime_number(int n)
{
	if (n == 1)
	{
		return (1);
	}
	if (n > 1)
	{
		return (0);
	}
	else
	{
		return (is_prime_number(n + 1));
	}
}
