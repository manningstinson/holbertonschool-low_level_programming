#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table
 * @key: The key
 * @value: The value associated with the key
 *
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *new_node, *current;

    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return 0;

    /* Get the index using the key_index function */
    index = key_index((unsigned char *)key, ht->size);

    /* Check if the key already exists, and update the value if it does */
    current = ht->array[index];
    while (current)
    {
        if (strcmp(current->key, key) == 0)
        {
            free(current->value); /* Free the existing value */
            current->value = strdup(value); /* Duplicate the new value */
            if (current->value == NULL)
                return 0; /* Memory allocation failure */
            return 1; /* Update successful */
        }
        current = current->next;
    }

    /* Create a new node */
    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return 0; /* Memory allocation failure */

    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(new_node);
        return 0; /* Memory allocation failure */
    }

    new_node->value = strdup(value);
    if (new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node);
        return 0; /* Memory allocation failure */
    }

    /* Add the new node at the beginning of the list (collision resolution) */
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return 1; /* Insertion successful */
}

