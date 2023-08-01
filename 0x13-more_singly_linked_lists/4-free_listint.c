#include "lists.h"

/**
 * free_listint - Frees listint_t.
 * @head: Pointer to the first node.
 *
 * Return: 0.
 */
void free_listint(listint_t *head)
{
	listint_t *remove;

	while (head)
	{
		remove = head->next;
		free(head);
		head = remove;
	}
}
