#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a linked list.
 * @head: Pointer to first node.
 *
 * Return: Free node.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free (temp);
	}
}
