#include "lists.h"

/**
 * *insert_nodeint_at_index - Inserts new node.
 * @head: Pointer to first node.
 * @idx: Index of the list where the new node should be added.
 * @n: Number of nodes.
 *
 * Return: Address of new node, NULL if failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int node;
	listint_t *new, *temp, *a = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		free(a);
		return (new);
	}

	if (*head == NULL && idx != 0)
	{
		free(new);
		return (new);
	}

	for (node = 0; node < (idx - 1) && a != NULL; node++)
	{
		a = a->next;
	}

	if (a == NULL && node < (idx - 1))
	{
		free(new);
		return (NULL);
	}
	temp = a->next;
	a->next = new;
	new->next = temp;
	return (new);
}
