#include "main.h"

/**
 * _memset - Function fills memory with a constant byte.
 * @b: Address memory to print.
 * @s: Size of memory to print.
 * @n: Number that fills first bytes of the memory.
 *
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int numb1 = 0;

	while (numb1 < n)
	{
	s[numb1] = b;
	numb1++;
	}

	return (s);
}
