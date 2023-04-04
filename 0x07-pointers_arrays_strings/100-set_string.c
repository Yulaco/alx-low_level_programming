#include "main.h"

/**
 * set_string - Function that sets the value of a pointer to a char.
 *
 * @s: the pointer to modify
 * @to: the value to modify the pointer to
 *
 * Return: 0.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
