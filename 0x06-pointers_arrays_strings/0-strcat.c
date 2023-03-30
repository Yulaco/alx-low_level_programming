#include "main.h"

/**
 * _strcat - Function that concatenates two strings.
 * Appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of the dest,
 * then adds a terminating null byte.
 * @src: Checks code to append.
 * @dest: Checks code to append to.
 *
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int concateS1 = 0;
	int concateS2 = 0;

	while (dest[concateS1] != '\0')

	{
		concateS1++;
	}

	while (src[concateS2] != '\0')
	{
		dest[concateS1] = src[concateS2];
		concateS1++;
		concateS2++;
	}
	dest[concateS1] = '\0';

	return (dest);
}
