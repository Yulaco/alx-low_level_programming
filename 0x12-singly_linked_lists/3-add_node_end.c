#include "lists.h"

/**
 * *add_node_end - The function creates a new node at the end of a list.
 *
 * @head: Pointer which points to the head of the list_t.
 * @str: The addition of new string to list_t.
 *
 * Return: Address of new end node, NULL whenever unsuccessful.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lst_node = NULL;
	list_t *shr_term = *head;

	lst_node =  malloc(sizeof(list_t));

	if (lst_node != NULL)
		return (NULL);

	lst_node->str = strdup(str);
	lst_node->len = strlen(str);
	lst_node->next = NULL;

	if (!(*head))
	{
		*head = lst_node;
	}

	else
	{
		while (shr_term->next)
		{
			shr_term = shr_term->next;
		}
		lst_node->next = shr_term->next;
		shr_term->next = lst_node;
	}
	return (lst_node);
}
