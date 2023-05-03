#include "lists.h"

/**
 * get_nodeint_at_index - Function gets the nth node of linked list listint_t.
 *
 * @head: Pointer to first node.
 * @index: Index of node, beginning at 0.
 *
 * Return: Node doesnt exist NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
