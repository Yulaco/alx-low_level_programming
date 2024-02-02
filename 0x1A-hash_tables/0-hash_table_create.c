#include "hash_tables.h"

/**
 * *hash_table_create - Function creates a hash table.
 * @size: Size of array.
 *
 * Return: Pointer to new hash table,
 * if something wrong NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr;
	unsigned long int count;

	ptr = malloc(sizeof(hash_table_t));

	if (ptr == NULL)
		return (NULL);

	ptr->size = size;
	ptr->array = malloc(sizeof(hash_node_t *) * size);

	if (ptr->array == NULL)
		return (NULL);

	for (count = 0; count < size; count++)
		ptr->array[count] = NULL;

	return (ptr);
}
