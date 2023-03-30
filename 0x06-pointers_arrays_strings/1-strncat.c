#include "main.h"

/**
 * _strncat - Function that concatenates two strings,
 * uses n bytes from src; and src does not need to be
 * null-terminated if it contains n or more bytes.
 * @dest: Destination to concatenate.
 * @src: Source of of concatenate.
 * @n: Number of bytes.
 *
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int concateS1 = 0;
	int concateS2 = 0;

	while (dest[concateS1] != '\0')
	{
		concateS1++;
	}

	while (concateS2 < n && src[concateS2] != '\0')
	{
		dest[concateS1] = src[concateS2];
		concateS1++;
		concateS2++;
	}
	dest[concateS1] = '\0';

	return (dest);
}
