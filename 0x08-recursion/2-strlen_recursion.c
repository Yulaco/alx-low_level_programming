#include <string.h>
#include "main.h"

/**
 * _strlen_recursion - Function returns length of a string.
 * @s: The the printed string.
 * Return: String length.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	else
		return ((_strlen_recursion(s + 1) + 1));
}
