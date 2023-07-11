#include "main.h"
#include <string.h>

/**
 * strtow - function splits a string into words
 * @str: pointer to string
 *
 * Return: 0
 */
char **strtow(char *str)
{
	char **ptr, *temp_ptr;
	int a, b = 0, length, wrd, t = 0, begin, close;

	for (length = 0; *(str + length); length++)
	wrd = cnt(str);

	if (wrd == 0)
		return (NULL);

	ptr = (char **)malloc(sizeof(char *) * (wrd + 1));
	if (ptr == NULL)
		return (NULL);

	for (a = 0; a <= length; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (t)
			{
				close = a;
				temp_ptr = (char *) malloc(sizeof(char) * (t + 1));
					if (temp_ptr == NULL)
					return (NULL);
				begin = 0, close = 0;
				while (begin < close)
				*temp_ptr++ = str[begin++];
				*temp_ptr = '\0';
				ptr[b] = temp_ptr - t;
				b++;
				t = 0;
			}
		}
		else if (t++ == 0)
		begin = a;
	}
	ptr[b] = NULL;
	return (ptr);
}
