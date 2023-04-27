#include "lists.h"

/**
 * list_len - The function taht gets back the amount of elements in list.
 *
 * @h: Pointer of the list.
 *
 * Return: The elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t lst_node = 0;

	while (h)
	{
		lst_node++;
		h = h->next;
	}

	return (lst_node);
}
