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
	unsigned int memo;

	if (nmemb  == 0 || size == 0)
		return (NULL);

	alocar = malloc(size * nmemb);

	if (alocar == NULL)
		return (NULL);

	memo = 0;
	while (memo < nmemb * size)
	{
		alocar[memo] = 0;
		memo++;
	}

	return (alocar);
}
