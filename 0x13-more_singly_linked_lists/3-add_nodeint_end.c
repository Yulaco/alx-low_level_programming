#include "lists.h"

/**
 * add_nodeint_end - Function creates node at end of list.
 *
 * @head: Pointer pointing to last node.
 * @n: Number of elements.
 *
 * Return: Location of new element, or NULL whenever unsuccessful.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *element1, *element2;

	element1 = malloc(sizeof(listint_t));

	if (element1 == NULL)
		return (NULL);

	element1->n = n;
	element1->next = NULL;

	if (*head == NULL)
		*head = element1;
	else
	{
		element2 = *head;
		while (element2->next != NULL)
			element2 = element2->next;
		element2->next = element1;
	}
	return (element2);
}
