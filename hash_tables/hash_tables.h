#ifndef HASH_TABLES_H
#define HASH_TABLES_H

/**
 * struct hash_node_s - Node of a hash table
 * @key: The key (string)
 * @value: The value associated with the key
 * @next: Pointer to the next node in the collision resolution chain
 */

typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
}
	hash_node_t;

/**
 * struct hash_table_s - Hash table
 * @size: The size of the array
 * @array: Array of pointers to hash nodes
 */

typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
}

	hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);

#endif
