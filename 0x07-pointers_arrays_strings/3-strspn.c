#include "main.h"

/**
 * _strspn - Function that gets length of a prefix substring.
 * @s: Initial segment to return.
 * @accept: The prefix string.
 *
 * Return: bytes_num.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes_num = 0;
	int length_substring;

	while (*s)
	{
		for (length_substring = 0; accept[length_substring]; length_substring++)
		{
			if (*s == accept[length_substring])
			{
				bytes_num++;
				break;
			}
			else if (accept[length_substring + 1] == '\0')
				return (bytes_num);
		}
		s++;
	}
	return (bytes_num);
}
