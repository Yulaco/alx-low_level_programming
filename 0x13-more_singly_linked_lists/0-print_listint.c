#include "lists.h"

/**
 * print_listint - Prints all items of linstint_t.
 * @h: Pointer to the first node.
 *
 * Return: Number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t num;

	for (num = 0; num != NULL; num++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num);
}
