#include "main.h"

/**
 * _strlen - Function returns the length of strings.
 *@s: input string length.
 *
 * Return: Length of string.
 */
int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')

	{
		a++;
	}
	return (a);
}
