#include "hash_tables.h"

/**
 * key_index - Function gives the index of a key.
 * @key: The key of the table.
 * @size: Size of teh array of the hash table.
 *
 * Return: Index where the key/value should be stored in the array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
