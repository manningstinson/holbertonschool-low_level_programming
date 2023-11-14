# Task 0: Write a function that prints all the elements of a list_t list
 
   ### Prototype: `size_t print_list(const list_t *h);`
  - Define the function prototype indicating its name, parameters, and return type.
  - Return: the number of nodes
  - If str is NULL, print [0] (nil)
  - Specify the behavior when the 'str' member of a node is NULL. Print "[0] (nil)" in such cases.
  - You are allowed to use printf
  - The function is permitted to use the printf function for output.

## Breaking down Prototype (Function Definition)
To summarize, the function `print_list` takes a pointer to a constant `list_t` object (`const list_t *h`) as its parameter and returns a `size_t` value.

**`size_t`**: This is the return type of the function. `size_t` is an unsigned integer type, often used to represent sizes or indices.

**`print_list`**: This is the name of the function. In this case, the function is named `print_list`.

**`(const list_t *h)`**: These are the parameters of the function.

**`const list_t *h`**: This indicates that the function takes a single parameter named `h`, which is a pointer to a constant (`const`) object of type `list_t`. The `const` keyword ensures that the function does not modify the content of the pointed object.

**`;`**: This semicolon marks the end of the function declaration. In C, each statement or declaration typically ends with a semicolon.

