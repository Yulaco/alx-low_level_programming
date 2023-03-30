#include "main.h"
/**
 * _strncpy - Function copies a string.
 * @dest: Destination of string.
 * @src: Source of String.
 * @n: Number of bytes.
 *
 * Return: 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int copyString = 0;

	while (copyString < n && src[copyString] != '\0')
	{
		dest[copyString] = src[copyString];
		copyString++;
	}

	while (copyString < n)
	{
		dest[copyString] = '\0';
		copyString++;
	}
	return (dest);
}
