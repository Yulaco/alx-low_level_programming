#include "lists.h"

/**
 * free_listint2 - Frees listint_t.
 * @head: Pointer to NULL.
 *
 * Return: Node.
 */
void free_listint2(listint_t **head)
{
	listint_t *remove;

	if (head == NULL)
		return;

	while (*head)
	{
		remove = (*head)->next;
		free(*head);
		*head = remove;
	}
	head = NULL;
}
