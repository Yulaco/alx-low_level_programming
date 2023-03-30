#include "main.h"

/**
 * leet - Function that encodes a string into 1337.
 * @n: input value.
 *
 * Return: n value
 */
char *leet(char *n)
{
	int a, b;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	for (a = 0; n[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (n[a] == letters[b])
			{
				n[a] = numbers[b];
			}
		}
	}
	return (n);
}
