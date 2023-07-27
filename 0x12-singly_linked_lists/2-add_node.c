#include "lists.h"

/**
 * add_node - Function creates a new node at the start of list_t.
 *
 * @head: Pointer points to the head of list_t.
 * @str: Addition of new string to list_t.
 *
 * Return: Address of new initial node or NULL whenever unsuccessful.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add_node;
	int len = 0;

	add_node = malloc(sizeof(list_t));

	if (add_node)
	{
		add_node->str = strdup(str);
		if (add_node->str)
		{
			while (add_node->str[len])
				len++;

			add_node->len = len;
			add_node->next = *head;
			*head = add_node;

			return (add_node);
		}
		free(add_node);
		return (NULL);
	}
	return (NULL);
}
