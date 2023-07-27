#include "lists.h"

/**
 * list_len - Function returns number of elements in list_t.
 * @h: Pointer to list_t.
 *
 * Return: Elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t node_lst = 0;

	while (h)
	{
		h = h->next;
		node_lst++;
	}
	return (node_lst);
}
