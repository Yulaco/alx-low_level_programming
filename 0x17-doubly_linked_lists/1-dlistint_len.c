#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked list.
 * @h: Pointer to head node.
 *
 * Return: Number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	do {
		h = h->next;
		node++;
	} while (h != NULL);

	return (node);
}
