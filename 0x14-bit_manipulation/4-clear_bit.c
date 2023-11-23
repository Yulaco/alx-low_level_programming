#include "main.h"

/**
 * clear_bit - Sets value of bit to 0 at a given index.
 *
 * @n: Pointer to value.
 * @index: Location of value.
 *
 * Return: 1 if successful, else -1 if unsuccessful.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
