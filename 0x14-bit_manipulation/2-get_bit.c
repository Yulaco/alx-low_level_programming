#include "main.h"

/**
 * get_bit - Returns value of a bit at a given location.
 *
 * @n: Value of the bit.
 * @index: Location of value.
 *
 * Return: Value of bit at index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
