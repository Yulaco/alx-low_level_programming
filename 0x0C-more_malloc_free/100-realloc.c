#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - copies n characters from location in source
 * to location in destination.
 *
 * @ptr: Pointer to the memory of source.
 * @old_size: Previous size, in bytes, of assigned area.
 * @new_size: Latest size, in bytes of the new memory block.
 *
 * Return: pointer.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *NewMemoryAlloc;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	NewMemoryAlloc = malloc(new_size);

	if (NewMemoryAlloc == NULL)
		return (NULL);

	_memcpy(NewMemoryAlloc, ptr, (old_size < new_size) ? old_size : new_size);
	free(ptr);
	return (NewMemoryAlloc);
}

/**
 * _memcpy - Function that copies memory from source to destination.
 *
 * @src: Former destination.
 * @dest: Current destination.
 * @n: Number of integer.
 *
 * Return: Destination.
 */

void *_memcpy(void *dest, const void *src, unsigned int n)
{
	char *new_dest = dest;
	const char *previous_src = src;

	while (n--)
	*new_dest++ = *previous_src++;
	return (dest);
}
