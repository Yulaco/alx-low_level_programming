#include "main.h"

/**
 * _strpbrk - Function that finds the first occurence in the string.
 * @s: String to be located.
 * @accept: Bytes in the string to be located.
 *
 * Return: 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int string_search;

	while (*s)
	{
		for (string_search = 0; accept[string_search]; string_search++)
		{
			if (*s == accept[string_search])
				return (s);
		}
		s++;
	}
	return (0);
}
