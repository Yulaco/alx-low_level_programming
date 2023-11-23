#include "main.h"

/**
 * binary_to_uint - Fuction converts binary number to unsigned int.
 *
 * @b: Pointer to string.
 *
 * Return: Converted number, or 0 if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	int str = 0;
	unsigned int num = 0;

	if (b[str] == '\0')
		return (0);

	for (str = 0; ((b[str] == '0') || (b[str] == '1')); str++)
	{
		num <<= 1;
		num = num + b[str] - '0';
	}
	return (num);
}
