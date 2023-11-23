#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: If bug endisn 0, else 1 if little endian.
 */
int get_endianness(void)
{
	unsigned long int num = 1;

	return (*(char *)&num);
}
