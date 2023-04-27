#include "lists.h"

/**
 * add_node - The function creates a new node at the start of a list.
 *
 * @head: The pointer which points to the head of the list_t.
 * @str: The addition of new string to list_t.
 *
 * Return: Address of new initial node or NULL whenever unsuccessful.
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *add_elem;
	int len = 0;

	add_elem = malloc(sizeof(list_t));

	if (add_elem)
	{
		add_elem->str = strdup(str);
		if (add_elem->str)
		{
			while (add_elem->str[len])
				len++;

			add_elem->len = len;
			add_elem->next = *head;
			*head = add_elem;

			return (add_elem);
		}
		free(add_elem);
		return (NULL);
	}
	return (NULL);
}
