#include "main.h"

/**
 * *str_concat - Function concatenates two strings.
 * @s1: Pointer to a space in memory.
 * @s2: Pointer to newly allocated space in memory.
 *
 * Return: Null if failed.
 */
char *str_concat(char *s1, char *s2)
{
	char *connect;
	int a, b;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	for (a = 0; s1[a] != '\0'; a++)

	for (b = 0; s2[b] != '\0'; b++)

	connect = malloc(sizeof(char) * (a + b + 1));

	if (connect == NULL)
		return (NULL);

	for (a = 0; s1[a] != '\0'; a++)
		connect[a] = s1[a];

	b = 0;
	while (s2[b] != '\0')
	{
		connect[a] = s2[b];
		a++, b++;
	}
	connect[a] = '\0';
	return (connect);
}
