#include "main.h"

/**
 * puts_half - Function prints half of a string.
 *@str: Checks the character.
 *
 * Return: 0.
 */
void puts_half(char *str)
{
	int halfStr = 0, n;

	while (str[halfStr] != '\0')
	halfStr++;

	if (halfStr + 1 % 2 != '0')
	n = (halfStr - 1) / 2;

	else
	n = (halfStr / 2);
	n++;

	for (halfStr = n; str[halfStr] != '\0'; halfStr++)
		_putchar (str[halfStr]);
			_putchar ('\n');
}
