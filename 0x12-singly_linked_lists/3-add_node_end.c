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
	int len;
	char *moe;
	list_t *lst_node;
	list_t *new_node;

	new_node =  malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	moe = strdup(str);
	if (str == NULL)
		return (NULL);

	for (len = 0; str[len];)
		len++;

	new_node->str = moe;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;

	else
	{
		lst_node = *head;
		while (lst_node->next != NULL)
			lst_node = lst_node->next;

		lst_node->next = new_node;
	}
	return (lst_node);
}
