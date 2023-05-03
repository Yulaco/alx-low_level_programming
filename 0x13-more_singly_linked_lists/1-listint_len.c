#include "lists.h"

/**
 * listint_len - Function that gets the number of nodes in a linked list.
 *
 * @h: Pointer to the first node.
 *
 * Return: Number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes = nodes + 1;
	}
	return (nodes);
}
