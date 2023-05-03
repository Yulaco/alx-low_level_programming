#include "lists.h"

/**
 * free_listint - Function frees the list.
 *
 * @head: Pointer pointing to the first node.
 *
 * Return: 0.
 */
void free_listint(listint_t *head)
{
	listint_t *temp1;

	while (head)
	{
		temp1 = head->next;
		free(head);
		head = temp1;
	}
}
