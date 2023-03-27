#include "main.h"

/**
 * puts2 - Function prints every other character of a string
 * starting with the first character.
 * @str: Checks character of string.
 *
 * Return 0.
 */
void puts2(char *str)
{
	int string;

	for (string = 0; str[string] != '\0'; string++)
		if (string % 2 == 0)
			_putchar(str[string]);
	_putchar('\n');
}
