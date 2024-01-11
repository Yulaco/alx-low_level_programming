#include "lists.h"
#include <stdlib.h> 

/**
 * *add_dnodeint - Adds a new node at the beginning of a list.
 * @head: Pointer to pointer to the list.
 * @n: Data of the node.
 *
 * Return: Address of new element, or NULL if failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_element;

	new_element = malloc(sizeof(dlistint_t));

	if (new_element == NULL)
		return (NULL);

	new_element->n = n;
	new_element->prev = NULL;
	new_element->next = *head;

	if (*head != NULL)
		(*head)->prev = new_element;

	*head = new_element;

	return (new_element);
}
