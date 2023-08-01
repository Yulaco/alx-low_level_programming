#include "lists.h"

/**
 * *get_nodeint_at_index - Returns nth node of listint_t.
 * @head: Pointer to first element.
 * @index: Index of node.
 *
 * Return: If no node NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	node = 0;

	while (node < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		node++;
	}
	return (head);
}
