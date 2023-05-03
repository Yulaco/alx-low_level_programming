#include "lists.h"

/**
 * delete_nodeint_at_index - Function removes the node at index of listint_t.
 *
 * @head: Pointer to first node.
 * @index: Index of the node.
 *
 * Return: 1 if successful, -1 if unsuccessful.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int node;
	listint_t *temp1, *j = *head;

	if (j == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(j);
		return (1);
	}
	for (node = 0; node < (index - 1); node++)
	{
		j = j->next;
	}
	temp1 = j->next;
	j->next = temp1->next;
	free(temp1);
	return (1);
}
