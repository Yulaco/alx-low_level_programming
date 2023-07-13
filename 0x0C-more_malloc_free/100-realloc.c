#include "main.h"

/**
 * *_realloc - Function reallocates a memory block using malloc and free.
 *
 * @ptr: Pointer to previous memory.
 * @old_size: Size in bytes of assigned space to pointer.
 * @new_size: New size in bytes of new memory.
 *
 * Return: When new size equals 0, return 0, and ptr not NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ponteiro;
	char *velho_ptr;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ponteiro = malloc(new_size);

	if (!ponteiro)
		return (NULL);

	velho_ptr = ptr;
	if (new_size < old_size)
	{
		for (a = 0; a < new_size; a++)
			ponteiro[a] = velho_ptr[a];
	}
	if (new_size > old_size)
	{
		a = 0;
		while (a < old_size)
		{
			a++;
			ponteiro[a] = velho_ptr[a];
		}
	}
	free(ptr);
	return (ponteiro);
}
