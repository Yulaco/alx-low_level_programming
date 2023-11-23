#include "main.h"

/**
 * set_bit - Sets value of a bit to 1 at a given index.
 *
 * @n: Pointer to value to be set.
 * @index: Location of the bit.
 *
 * Return: 1 if works, or -1 if an error occured.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n = *n ^ (1 << index);

	return (1);
}
