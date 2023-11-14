# Task 1: Write a function that returns the number of elements in a linked list_t list.
Write a function that returns the number of elements in a linked list_t list.

### Prototype: `size_t list_len(const list_t *h);`
The purpose of this function is likely to determine the length or size of a linked list. The function takes a pointer to the head (`h`) of the linked list as an argument and returns the length as a `size_t` value.

`size_t`: This is a data type representing the size of objects in bytes. It's commonly used for sizes and counts in C.
`list_len`: This is the name of the function.
`const list_t *h`: This is the parameter of the function. It's a pointer (`*`) to a constant (`const`) object of type `list_t`. The `const` qualifier indicates that the function won't modify the data pointed to by `h`.

### Project Code
[Singly Linked Lists: Task 1 ](https://github.com/manningstinson/holbertonschool-low_level_programming/blob/main/singly_linked_lists/1-list_len.c)
