#include "lists.h"

/**
 * sum_listint - Function gets the total of all data of linked list listint_t.
 *
 * @head: Pointer to the first node.
 *
 * Return: 0 if list empty.
 */
int sum_listint(listint_t *head)
{
	int total_data = 0;

	while (head)
	{
		total_data = total_data + head->n;
		head = head->next;
	}
	return (total_data);
}
