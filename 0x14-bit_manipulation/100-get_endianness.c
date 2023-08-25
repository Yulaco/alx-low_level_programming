#include "main.h"
/**
 * get_endianness - Function checks the endianness.
 *
 * Return: If big endian 0, else 1 if little endian.
 */
int get_endianness(void)
{
	unsigned long int num = 1;

	return (*(char *)&num);
}
