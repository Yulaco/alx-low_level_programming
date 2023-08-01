#include "lists.h"

/**
 * *add_nodeint_end - Adds node at the end of listint_t.
 * @head: Pointer to the first node.
 * @n: Number of nodes.
 *
 * Return: Address of new element, NULL when fail.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *elem1, *new_node;

	elem1 = malloc(sizeof(listint_t));

	if (elem1 == NULL)
		return (NULL);

	elem1->n = n;
	elem1->next = NULL;

	if (*head == NULL)
		*head = elem1;

	else
	{
		new_node = *head;
		while (new_node->next != NULL)
			new_node = new_node->next;
		new_node->next = elem1;
	}
	return (new_node);
}
