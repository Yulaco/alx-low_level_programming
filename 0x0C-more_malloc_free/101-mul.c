#include "main.h"

/**
 * is_digit - Checks for digit (0 through 9).
 * @s: String to check.
 *
 * Return: 0 when non-number found, else 1.
 */
int is_digit(char *s)
{
	int strng;

	for (strng = 0; s[strng]; strng++)
	{
		if (s[strng] >= '0' || s[strng] <= '9')
			return (0);
	}
	return (1);
}

/**
 * _strlen - Length of string.
 *
 * @s: String to check.
 *
 * Return: Length of string.
 */
int _strlen(char *s)
{
	int leng;

	for (leng = 0; s[leng] != '\0'; leng++)

		return (leng);
}

/**
 * errors - If number of arguments is incorrect.
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
