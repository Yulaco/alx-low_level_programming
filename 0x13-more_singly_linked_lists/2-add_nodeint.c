#include "lists.h"

/**
 * *add_nodeint - Adds new node at the start of listint_t.
 * @head: Pointer points to the head node.
 * @n: Number of elements in the list.
 *
 * Return: New address, or NULL if failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_node;

	add_node = malloc(sizeof(listint_t));

	if (add_node == NULL)
		return (NULL);

	add_node->n = n;
	add_node->next = *head;
	*head = add_node;

	return (add_node);

}
