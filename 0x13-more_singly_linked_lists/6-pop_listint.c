#include "lists.h"

/**
 * pop_listint - Function removes head node of listint_t.
 *
 * @head: Pointer to first node.
 *
 * Return: 0 when list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp1;
	int del_node;

	if (*head == NULL)
		return (0);

	temp1 = *head;
	del_node = (*head)->n;
	*head = (*head)->next;
	free(temp1);

	return (del_node);
}
