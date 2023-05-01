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
	unsigned int lst_node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		lst_node++;
	}

	return (lst_node);
}