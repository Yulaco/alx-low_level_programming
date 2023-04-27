#include "lists.h"

/**
 * print_list - The function to display the entire elements of a list.
 *
 * @h: Pointer of the list.
 *
 * Return: Values of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t lst_node = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");

		else
			printf("[%d] %s\n", h->len, h->str);

		lst_node++;
		h = h->next;
	}

	return (lst_node);
}
