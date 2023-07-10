#include "main.h"

/**
 * *create_array - creates array of characters
 * and assigns it with a specific character
 * @size: size of integer
 * @c: character to be checked
 *
 * Return: null
 */
char *create_array(unsigned int size, char c)
{
	char *value_ptr;
	unsigned int count_size;

	value_ptr = malloc(size * sizeof(char));

	for (count_size = 0; count_size < size; count_size++)
	{
		value_ptr[count_size] = c;
	}
	return (value_ptr);
}
