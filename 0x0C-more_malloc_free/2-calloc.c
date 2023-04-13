#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - Function that allotes space for the variable array.
 *
 * @nmemb: Location of memory to display.
 * @size: Storage size to display.
 *
 * Return: size cal then NULL, unsuccsseful then NULL.
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *cal;
	unsigned int loc;

	if (nmemb == 0 && size == 0)
		return (NULL);

	cal = malloc(size * nmemb);

	if (cal == NULL)
		return (NULL);

	for (loc = 0; loc < nmemb * size; loc++)
		cal[loc] = 0;

	return (cal);
}
