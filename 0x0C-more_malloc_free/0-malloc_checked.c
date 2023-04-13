#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - Function that assigns the retention of information
 * utilizing malloc.
 *
 * @b: Numerical value to assign.
 *
 * Return: 0..
 */

void *malloc_checked(unsigned int b)
{
	void *dar;
	dar = malloc(b);

	if (dar == NULL)
	{
		exit(98);
	}
		return (dar);
}
