#include "main.h"

/**
 * flip_bits - Returns number of bits you need to get
 * from one number to another.
 *
 * @n: Number to get.
 * @m: Number to get.
 *
 * Return: Flipped numbers.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num1 = (sizeof(n) * 8);
	unsigned long int num2 = 0;

	while (num1--)
		num2 = num2 + (n >> num1 & 1) != (m >> num1 & 1);

	return (num2);
}
