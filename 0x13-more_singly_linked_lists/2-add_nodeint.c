#include "lists.h"

/**
 * add_nodeint -  Function that creates a new node at the start of a list.
 *
 * @head: Pointer points to first node.
 * @n: Number of elements of list.
 *
 * Return: Location of new element, or NULL when unsuccessful.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *element1;

	element1 =  malloc(sizeof(listint_t));

	if (element1 == NULL)
		return (NULL);

	element1->n = n;
	element1->next = *head;
	*head = element1;

	return(element1);
}
