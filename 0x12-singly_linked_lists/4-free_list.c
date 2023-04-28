#include "lists.h"

/**
 * free_list - The fuction to free list.
 *
 * @head: Pointer to the first node.
 *
 * Return: Free list.
 */

void free_list(list_t *head)
{
	list_t *shr_tim;

	while ((shr_tim = head) != NULL)
	{
		head = head->next;
		free(shr_tim->str);
		free(shr_tim);
	}
}
