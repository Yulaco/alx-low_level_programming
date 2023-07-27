#include "lists.h"

/**
 * print_list - Function prints all elements of list_t.
 *
 * @h: Pointer of list.
 *
 * Return: Values of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t element_list = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		element_list++;
	}
	return (element_list);
}
