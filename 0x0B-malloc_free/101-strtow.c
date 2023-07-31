#include "main.h"
#include <string.h>
int word_count(char *s);


/**
 * strtow - Function splits a string into words.
 * @str: Pointer to string.
 *
 * Return: If fail NULL.
 */
char **strtow(char *str)
{
	char **ptr, *temp_ptr;
	int a, b = 0, length, t = 0, wrd, begin = 0, close;

	if (str == NULL)
		return (NULL);

	for (length = 0; (*(str + length)); length++)
		continue;

	wrd = word_count(str);

	if (wrd == 0)
		return (NULL);

	ptr = malloc(sizeof(char *) * (wrd + 1));
	if (ptr == NULL)
		return (NULL);

	for (a = 0; a <= length; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (t)
			{
				close = a;
				temp_ptr = malloc(sizeof(char) * (t + 1));
				if (temp_ptr == NULL)
				{
					for (b = 0; b < wrd; b++)
						free(ptr[b]);
					free(ptr);
					return (NULL);
				}

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

/**
 * word_count - Counts words.
 * @s: String to check.
 *
 * Return: Count of words.
 */
int word_count(char *s)
{
	int a = 0, j, i = 0;

	j = 0;
	while (s[j] != '\0')
	{
		if (s[j] == ' ')
			a = 0;
		else if (a == 0)
		{
			a = 1;
			i++;
		}
		j++;
	}
	return (i);
}
