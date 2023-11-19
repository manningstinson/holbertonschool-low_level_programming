#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: The hash table
 * @key: The key to search for
 *
 * Return: The value associated with the key, or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int index;
    hash_node_t *current;

    if (ht == NULL || key == NULL || *key == '\0')
        return NULL;

    /* Get the index using the key_index function */
    index = key_index((unsigned char *)key, ht->size);

    /* Search for the key in the list at the calculated index */
    current = ht->array[index];
    while (current)
    {
        if (strcmp(current->key, key) == 0)
            return current->value; /* Key found, return the associated value */
        current = current->next;
    }

    return NULL; /* Key not found */
}

