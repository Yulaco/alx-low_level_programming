#include "main.h"
#include <stdlib.h>

/**
 * _strstr - Function that finds the first substring needle,
 *  in the string haystack.
 *  @haystack: longer string to find
 *  @needle: substring to find for
 *
 *  Return: a pointer to the beginning of the located substring, or retrun NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int s = 0;

	while (needle[s] != '\0')
		s = s + 1;

	while (*haystack)
	{
		for (i = 0; needle[i]; i = i + 1)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != s)
			haystack = haystack + 1;
		else
			return (haystack);
	}
	return (NULL);
}
