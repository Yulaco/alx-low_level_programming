#include "main.h"

/**
 * string_toupper - Function that changes lowercase
 * letters of a string to uppercase.
 * @i: Pointer to string.
 *
 * Return: i.
 */
char *string_toupper(char *i)
{
	int lowerUpper = 0;

	while (i[lowerUpper] != '\0')
	{
		if (i[lowerUpper] >= 'a' && i[lowerUpper] <= 'z')
			i[lowerUpper]  = i[lowerUpper] - 32;
		lowerUpper++;
	}
	return (i);
}
