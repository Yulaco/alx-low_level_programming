#include "lists.h"

/**
 * free_list - Function frees list_t.
 * @head: Pointer that points to head of list_t.
 *
 * Return: 0.
 */
void free_list(list_t *head)
{
	list_t *empty_list;

	while ((empty_list = head) != NULL)
	{
		head = head->next;
		free(empty_list->str);
		free(empty_list);
	}
}
