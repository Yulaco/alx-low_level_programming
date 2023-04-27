0x12 C-Programming Singly linked lists

The following project aims to work on the singly linked lists data structure. It is a data structure which contains nodes that are not kept in contiguous memory allocations. Additionally, each node is attached to the next node utilizing a pointer. Listed below are the tasks:

0 - Create a function that displays all the elements of a list_t list.

	-Prototype: size_t print_list(const list_t *h)
	-Return number of nodes.

1 - Create a function that gets back the number of elements in a linked list_t list.

	-Prototype: size_t list_len(const list_t *h)

2 - Create a function that appends a new node at the start of a list_t list.

	-Prototype: list_t *add_node(list_t **head, const char *str)
	-Return the location of the new element, or NULL every time unsuccessful.

3 - Create a function that appends a new node at the end of a list_t list.

	-Prototype: list_t *add_node_end(list_t **head, const char *str)
	-Return the location of the new element, or NULL every time unsuccessful.

4 - Create a function that frees a list_t list.

	-Prototype: void free_liist(list_t *head)
