#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - A task that gets back a pointer
 * to a new assigned space in memory,
 * which holds a duplicate of the string given as a parameter.
 * @str: String to be checked.
 *
 * Return: NULL.
 */
char *_strdup(char *str)
{
	char *address_var;

	int length_string, a;

	if (str == NULL)
	{
		return (NULL);
	}

	for (length_string = 0; str[length_string]; length_string++)
	{
		address_var = malloc(sizeof(char) * (length_string + 1));
	}

	if (!address_var)
	{
		return (NULL);
	}
	for (a = 0; a < length_string; a++)
	{
		address_var[a] = str[a];
	}
	address_var[a] = '\0';
	return (address_var);
}
