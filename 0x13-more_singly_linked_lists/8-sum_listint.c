#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data(n) of listint_t.
 * @head: Pointer to first node.
 *
 * Return: If list empty 0.
 */
int sum_listint(listint_t *head)
{
	int sum_data = 0;

	while (head)
	{
		sum_data += head->n;
		head = head->next;
	}
	return (sum_data);
}
