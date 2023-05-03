#include "lists.h"

/**
 * free_listint2 - Function free list.
 *
 * @head: Pointer points to NULL.
 *
 * Return: Node.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp2;

	if (head == NULL)
		return;

	while (*head)
	{
		temp2 = (*head)->next;
		free(*head);
		*head = temp2;
	}
	head = NULL;
}
