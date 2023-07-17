#include "main.h"
#include <stdlib.h>

/**
 * free_dog - Function frees dog.
 *
 * @d: Pointer to memory location to be freed.
 *
 * Return 0.
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).name);
		free((*d).owner);

		free(d);
	}
}
