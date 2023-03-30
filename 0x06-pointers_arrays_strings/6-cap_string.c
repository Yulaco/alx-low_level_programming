#include "main.h"

/**
 * cap_string - Function that capitalizes all words of a string.
 * @n: capitalized string.
 *
 * Return: Pointer.
 */
char *cap_string(char *n)
{
	int listWords = 0;

	while (n[listWords])
	{
		while (!(n[listWords] >= 'a' && n[listWords] <= 'z'))
			listWords++;

		if (n[listWords - 1] == ' ' ||
			n[listWords - 1] == '\t' ||
			n[listWords - 1] == '\n' ||
			n[listWords - 1] == ',' ||
			n[listWords - 1] == ';' ||
			n[listWords - 1] == '.' ||
			n[listWords - 1] == '!' ||
			n[listWords - 1] == '?' ||
			n[listWords - 1] == '"' ||
			n[listWords - 1] == '(' ||
			n[listWords - 1] == ')' ||
			n[listWords - 1] == '{' ||
			n[listWords - 1] == '}' ||
			 listWords == 0)
		n[listWords] -= 32;

	listWords++;
	}
	return (n);
}


