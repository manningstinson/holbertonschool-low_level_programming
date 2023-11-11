#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Removes the head node of a listint_t linked list
 * @head: Pointer to the head of the list
 * Return: Value stored in the head node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
    listint_t *temp;
    int value;

    if (head == NULL || *head == NULL)
        return 0;

    temp = *head;
    value = temp->n;

    *head = temp->next;
    free(temp);

    return value;
}

