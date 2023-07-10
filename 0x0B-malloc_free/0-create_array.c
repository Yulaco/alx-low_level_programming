#include "main.h"

/**
 * *create_array - creates array of characters
 * and assigns it with a specific character
 * @size: size of integer
 * @c: character to be checked
 *
 * Return: NULL
 */
char *create_array(unsigned int size, char c)
{
	char *value_ptr;
	unsigned int count_size;

	if (size == 0)
	{
		return (NULL);
	}

	value_ptr = malloc(size * sizeof(char));

	if (value_ptr == NULL)
	{
		return (NULL);
	}

	for (count_size = 0; count_size < size; count_size++)
	{
		value_ptr[count_size] = c;
	}
	return (value_ptr);
}
