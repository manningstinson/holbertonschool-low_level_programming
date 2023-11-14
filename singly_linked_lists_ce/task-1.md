<img width="1280" alt="singly_linked_lists_ce" src="https://github.com/manningstinson/holbertonschool-low_level_programming/assets/104523090/e6f8d517-2fab-4950-b48f-67f02f047654">

# Task 1: Write a function that returns the number of elements in a linked list_t list.

### Prototype: `size_t list_len(const list_t *h);`
The purpose of this function is likely to determine the length or size of a linked list. The function takes a pointer to the head (`h`) of the linked list as an argument and returns the length as a `size_t` value.

`size_t`: This is a data type representing the size of objects in bytes. It's commonly used for sizes and counts in C. <br> <br>
`list_len`: This is the name of the function.<br> <br>
`const list_t *h`: This is the parameter of the function. It's a pointer (`*`) to a constant (`const`) object of type.  `list_t`. The `const` qualifier indicates that the function won't modify the data pointed to by `h`.

## Project Code
[Singly Linked Lists: Task 1 ](https://github.com/manningstinson/holbertonschool-low_level_programming/blob/main/singly_linked_lists/1-list_len.c)

## Function Definition
```c
// Function prototype
size_t list_len(const list_t *h);
```
This line declares the prototype of a C function named `list_len`.
It takes a constant pointer (`const list_t *h`) to an object of type `list_t` as a parameter.
It returns a value of type `size_t`, which is commonly used for sizes and counts.

## Header Inclusion
```c
#include <stddef.h> // Include the necessary header for size_t
```
This line includes the `<stddef.h>` header, which is necessary for the definition of the `size_t` type.

## Linked List Definition
```c
// Definition of the list structure (assuming it exists somewhere in the code)
struct list {
    // Define the structure of your linked list nodes
    // (e.g., data and a pointer to the next node)
    // ...
};
```
This block assumes the existence of a structure named `list` that represents linked list nodes.
The structure might contain fields like `data` for the actual data and `next` for a pointer to the next node.

## Header Definition
[Singly Linked Lists: Header definition file <br> <br>](https://github.com/manningstinson/holbertonschool-low_level_programming/blob/main/singly_linked_lists/lists.h)
```c
#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list_s - singly linked list
 * @str: string (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
```
## Typedef
```c
// Typedef for convenience
typedef struct list list_t;
```
This line uses `typedef` to create an alias `list_t` for the `struct list`.
This makes it more convenient to refer to the linked list type as `list_t` instead of `struct list`.

## Function Implementation
```c
// Function implementation
size_t list_len(const list_t *h) {
    size_t count = 0; // Initialize a variable to count the nodes

    // Traverse the linked list
    while (h != NULL) {
        count++;       // Increment the count for each node
        h = h->next;   // Move to the next node
    }

    return count; // Return the total count, which is the length of the linked list
}
```
This block provides the implementation of the `list_len` function.
It initializes a variable `count` to zero, which will be used to count the nodes in the linked list.
It uses a `while` loop to traverse the linked list (`h`) until it reaches the end (when `h` becomes `NULL`).
For each node, it increments the `count` and moves to the next node (`h = h->next`).
Finally, the function returns the total count, representing the length of the linked list.
