#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at index of listint_t.
 * @head: Pointer to first node.
 * @index: Index of the node.
 *
 * Return: 1 if successful, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int node;
	listint_t *temp, *a = *head;

	if (a == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(a);
		return (1);
	}

	for (node = 0; node < (index - 1) && a->next != NULL; node++)
	{
		a = a->next;
	}
	temp = a->next;
	a->next = temp->next;
	free(temp);
	return (1);
}
