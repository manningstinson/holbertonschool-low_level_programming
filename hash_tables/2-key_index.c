#include "hash_tables.h"

/**
 * key_index - Gives the index of a key in a hash table array
 * @key: The key
 * @size: Size of the hash table array
 *
 * Return: Index at which the key/value pair should be stored in the array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);

	return (hash_value % size);
}
