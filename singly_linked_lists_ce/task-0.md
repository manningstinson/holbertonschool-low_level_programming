# Task 0: Write a function that prints all the elements of a list_t list
 
   ### Prototype: `size_t print_list(const list_t *h);`
  - Define the function prototype indicating its name, parameters, and return type.
  - Return: the number of nodes
  - If str is NULL, print [0] (nil)
  - Specify the behavior when the 'str' member of a node is NULL. Print "[0] (nil)" in such cases.
  - You are allowed to use printf
  - The function is permitted to use the printf function for output.

### Project Code
[Singly Linked Lists: Task 0 ](https://github.com/manningstinson/holbertonschool-low_level_programming/blob/main/singly_linked_lists/0-print_list.c)

singly_linked_lists/0-print_list.c

## Breaking down Prototype (Function Definition)
To summarize, the function `print_list` takes a pointer to a constant `list_t` object (`const list_t *h`) as its parameter and returns a `size_t` value.

**`size_t`**: This is the return type of the function. `size_t` is an unsigned integer type, often used to represent sizes or indices.

**`print_list`**: This is the name of the function. In this case, the function is named `print_list`.

**`(const list_t *h)`**: These are the parameters of the function.

**`const list_t *h`**: This indicates that the function takes a single parameter named `h`, which is a pointer to a constant (`const`) object of type `list_t`. The `const` keyword ensures that the function does not modify the content of the pointed object.

**`;`**: This semicolon marks the end of the function declaration. In C, each statement or declaration typically ends with a semicolon.

## Comments Explained
```c
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 * Format: see example
 * If str is NULL, print [0] (nil)
 * You are allowed to use printf
 */
```

**`print_list - prints all the elements of a list_t list`**: This is a documentation comment providing a brief description of the function's purpose. It indicates that the function is designed to print all elements of a linked list of type `list_t`.

**`@h: pointer to the head of the list`**: This is a parameter comment. It specifies that `h` is a parameter representing a pointer to the head of the linked list. The `@h` notation is often used to indicate function parameters in certain documentation styles.

**`Return: the number of nodes`**: This comment explains the return value of the function. The function is expected to return the total number of nodes in the linked list.

**`Format: see example`**: This comment suggests that the function output should follow a specific format, similar to an example. This format might be related to how each node's information is displayed.

**`If str is NULL, print [0] (nil)`**: This comment provides a specific instruction regarding the handling of nodes with a `NULL` string (`str`). It states that in such cases, the function should print "[0] (nil)".

**`You are allowed to use printf`**: This comment clarifies that the function is permitted to use the `printf` function for output. It's a note to the programmer indicating that using `printf` is acceptable within the scope of this function.

## Breaking down the Function

```c
size_t print_list(const list_t *h)
{
```

**Function Signature**: This line starts the function definition. It declares a function named `print_list` that takes a single parameter, which is a constant pointer to a `list_t` structure. The function returns a `size_t` value.

```c
	size_t count = 0;
```

**Variable Declaration**: This line declares a variable named `count` of type `size_t` and initializes it to 0. This variable will be used to count the number of nodes in the list.

```c
	while (h != NULL)
	{
```

**While Loop**: This line starts a `while` loop that continues as long as the pointer `h` is not equal to `NULL`. The loop iterates through each node of the linked list.

```c
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
```

**Conditional Statement**: Inside the loop, there's an `if-else` statement. It checks if the `str` member of the current node is `NULL`. If it is, it prints "[0] (nil)". Otherwise, it prints the length (`len`) and the string (`str`) of the node.

```c
		count++;
		h = h->next;
	}
```

**Increment and Update**: After printing the information for the current node, the `count` variable is incremented, and the pointer `h` is updated to point to the next node in the list.

```c
	return (count);
}
```

**Return Statement**: Finally, the function returns the total count of nodes in the linked list after iterating through all nodes. The return type is `size_t`, as specified in the function signature.
