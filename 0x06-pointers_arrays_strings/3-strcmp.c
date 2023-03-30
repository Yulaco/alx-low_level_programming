#include "main.h"

/**
 * _strcmp - Function that compares two strings.
 * @s1: First pointer to compare.
 * @s2: Second pointer to compare.
 *
 * Return: 0.
 */
int _strcmp(char *s1, char *s2)
{
	int compareString = 0;

	while (s1[compareString] != '\0' && s2[compareString] != '\0')
	{
		if (s1[compareString] != s2[compareString])
		{
			return (s1[compareString] - s2[compareString]);
		}
		compareString++;
	}
	return (0);

}
