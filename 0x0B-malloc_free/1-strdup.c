#include "main.h"

/**
 * *_strdup - gets back a pointer to a new space in
 * memory, holds a duplicate of the string given as a parameter
 * @str: string to be checked
 *
 * Return: NULL
 */
char *_strdup(char *str)
{
	char *addr_var;

	int str_length, a;

	if (str == NULL)
	{
		return (NULL);
	}

	for (str_length = 0; str[str_length] != '\0'; str_length++)

	addr_var = malloc(sizeof(char) * (str_length + 1));

	if (!addr_var)
	{
		return (NULL);
	}

	for (a = 0; a < str_length; a++)
	{
		addr_var[a] = str[a];
	}
	return (addr_var);
}
