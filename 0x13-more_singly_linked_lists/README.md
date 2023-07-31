**0x13 More Singly Linked Lists**

*The following project works on more singly linked data structure.
A data structure which contains nodes that are not kept in contiguous memory allocations.
Additionally, each node is attached to the next node utilizing a pointer.

The linked list used in the following tasks is the listint_t list.*

**0. Function that displays all the elements of a linked list.**

	-Prototype: size_t print_listint(const listint_t *h);
	-Return: Number of nodes.

**1. Function gets the number of elements of a linked list.**

	-Prototype: size_t listint_len(const listint-/t *h);

**2. Function adds a new node at the start of a linked list.**

	-Prototype: listint_t *add_nodeint(listint_t **head, const int n);
	-Return: Adddress of the new element, or NULL if failed.

**3. Function adds a new node at the end of a linked list.**

	-Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
	-Return Address of the new element, or NULL if failed.

**4. Function frees linked list.**

	-Prototype: void free_listint(listint_t *head);

**5. Function frees linked list.**

	-Prototype: void free_listint2(listint_t **head);
	-Function sets the head to NULL.

**6. Function deletes the first node of a linked list, and returns the head node's data (n).**

	-Prototype: int pop_listint(listint_t **head);
	-If linked list empty return 0.

**7. Function returns the nth node of a linked list.**

	-Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
	-Index is the index of the node, starts at 0.
	-If node doesn't exist, return NULL.

**8. Function returns the total of all the data(n) of a linked list.**

	-Prototype: int sum_listint(listint_t *head);
	-If the list is empty, return 0.

**9. Function that inserts a new node at a given position.**

	-Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
	-idx is the location where the node should be added. Index starts at 0.
	-Returns: Address of the new node, or NULL if it fails.
	-If not possible to add the new node at the index idx, do not add the new node and return NULL.

**10. Function deletes the node index of a linked list.**

	-Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);
	-Index is the index of the node taht should be deleted. Index starts at 0.
	-Returns: 1 if successful, -1 if failed.
