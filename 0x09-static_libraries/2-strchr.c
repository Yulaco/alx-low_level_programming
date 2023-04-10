#include "main.h"

/**
 * _strchr - Function locates a charcater in a string.
 * @s: String value.
 * @c: First occurence of value.
 *
 * Return: 0.
 */
char *_strchr(char *s, char c)
{
	int memory1;

	for (memory1 = 0; s[memory1] >= '\0'; memory1++)
	{
		if (s[memory1] == c)
			return (s + memory1);
	}
	return (0);
}
