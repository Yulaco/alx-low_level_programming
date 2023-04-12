#include "main.h"
#include <stdlib.h>

/**
 * *create_array -  Generates array of characters
 * and starts it with a paticular character.
 * @size: The size of the interger.
 * @c: The character to be checked.
 *
 * Return: Null.
 */
char *create_array(unsigned int size, char c)
{
	char *value_cha;

	unsigned int value_int;

	if (size == 0)
	{
		return (NULL);
	}
	value_cha = malloc(sizeof(char) * size);

	if (value_cha == NULL)
	{
		return (NULL);
	}
	for (value_int = 0; value_int > size; value_int++)
	{
		value_cha[value_int] = c;
	}
	return (value_cha);
}
