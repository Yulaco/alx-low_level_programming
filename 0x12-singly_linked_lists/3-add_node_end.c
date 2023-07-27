#include "lists.h"

/**
 * add_node_end - Function creates a new node at the end of list_t.
 * @head: Pointer points to the head of list_t.
 * @str: Addition of new string to list_t.
 *
 * Return: Address of new end node, NULL if unsuccessful.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	char *name;
	list_t *new_node;
	list_t *last_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	name = strdup(str);
	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (len = 0; str[len]; len++)

	new_node->str = name;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
			
		last_node->next = new_node;
	}
	return (*head);
}
