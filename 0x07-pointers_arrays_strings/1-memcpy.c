#include "main.h"
/**
 * _memcpy - Function that copies memory area of n bytes.
 * @dest: destination of value copied.
 * @src: source of value copied.
 * @n: Number of bytes copied.
 *
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int copy1 = 0;

	while (copy1 < n)
	{
		dest[copy1] = src[copy1];
		copy1++;
	}
	return (dest);
}
