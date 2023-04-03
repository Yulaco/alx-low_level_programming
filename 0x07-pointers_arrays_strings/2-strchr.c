#include "main.h"

/**
 * _strchr - Function locates a charcater in a string.
 * @s: String value.
 * @c: First occurence of value.
 *
 * Return: pointer.
 */
char *strchr(char *s, char c);
{
	int memory1 = 0;
	for (; s[memory1] >= '\0'; memory1++)
	{
		if (s[memory1] == c)
			return(&s[memory1]);
	}
	return (pointer);
}
