#include "lists.h"

/**
 * listint_len - Returns number of elements in listint_t.
 * @h: Pointer to the head node.
 *
 * Return: Number of nodes
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
