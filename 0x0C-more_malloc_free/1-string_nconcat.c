#include "main.h"

/**
 * *string_nconcat - Function joins two strings.
 *
 * @s1: Newly allocated space in memory.
 * @s2: First n bytes.
 * @n: First n bytes from s2.
 *
 * Return: Pointer.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int a, b, tamanho, tamanho2 = 0;

	for (tamanho = 0; s1 && s1[tamanho]; tamanho++)

	while (s2 && s2[tamanho2])
		tamanho2++;

	if (n < tamanho2)
		ptr = malloc(sizeof(char) * (tamanho + n + 1));
	else
		ptr = malloc(sizeof(char) * (tamanho + tamanho2 + 1));

	if (!ptr)
		return (NULL);

	for (a = 0; a < tamanho; a++)
		ptr[a] = s1[a];
	
	for (b = 0; b < tamanho; b++)
		ptr[b] = s2[b];

	while (n < tamanho2 && a < (tamanho + n))
		ptr[a++] = s2[b++];

	while (n >= tamanho2 && a < (tamanho + tamanho2))
		ptr[a++] = s2[b++];

	ptr[a] = '\0';

	return (ptr);
}
