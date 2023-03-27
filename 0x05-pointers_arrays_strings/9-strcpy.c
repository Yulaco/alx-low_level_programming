#include "main.h"

/**
 *_strcpy - Copies the string pointed to by src, including
 *the terminating null bytes (\0), to the buffer
 *pointed to by dest.
 * @src: String to be copied.
 * @dest: String to be pointed to..
 *
 * Return: 0.
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}

