#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - Function uses malloc to assign memory.
 * @nmemb: Location of memory to display.
 * @size: Storage size to display.
 *
 * Return: If malloc fails, return NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *alocar;
	unsigned int memo = 0;

	if (nmemb  == 0 || size == 0)
		return (NULL);

	alocar = malloc(size * nmemb);

	if (alocar == NULL)
		return (NULL);

	while (memo < nmemb * size)
	{
		memo++;
		alocar[memo] = 0;
	}

	return (alocar);
}
