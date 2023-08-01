#include "lists.h"

/**
 * pop_listint - Deletes head node of listint_t,
 * and returns head node's data(n).
 * @head: Pointer to head node.
 *
 * Return: When empty 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int del_head;

	if (*head == NULL)
		return (0);

	ptr = *head;
	del_head = (*head)->n;
	*head = (*head)->next;
	free(ptr);

	return (del_head);
}
