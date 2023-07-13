#include "main.h"

/**
 * *malloc_checked - Function uses malloc to assign memory.
 *
 * @b: Value to assign memory.
 *
 * Return: 0.
 */
void *malloc_checked(unsigned int b)
{
	void *alocar;

	alocar = malloc(b);

	if (alocar == NULL)
	{
		exit(98);
	}
	return (alocar);
}
