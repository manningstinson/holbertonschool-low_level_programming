<img width="1280" alt="92BD337E-E456-4A94-BCA1-F398AA1BA507" src="https://github.com/manningstinson/holbertonschool-low_level_programming/assets/104523090/7c126166-f341-49ef-9988-db7b5c37b774">

# ArgC, and ArgV
**ArgC** stands for "argument count," and **ArgV** stands for "argument vector." The terms are used in programming languages like C to manage command-line arguments when you run a program.

Think of **argc** as a counter that keeps track of how many things you tell your program when you run it. So, if you say "run my program" with no extra details, argc would be 1. If you say "run my program with these three things," argc would be 4 (because the program's name counts as one). **argv** helps store and organize those things.

## Task 1 (Filename: 1- args.c)


```c
#include <stdio.h>
```

This line includes a special set of instructions to work with input and output (like printing) in C.

```c
/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success
 */
```

This is a comment block that explains what the `main` function does. It's the starting point of the program, and it takes two inputs: `argc`, which is the number of command-line arguments, and `argv`, which is an array of those arguments. It returns 0 to indicate success.

```c
int main(int argc, char *argv[])
{
    (void) argv;
```

Here, we define the `main` function, which takes the number of command-line arguments and the array of arguments. The `(void) argv;` line means we're not using the `argv` variable in this program, so it's just there to avoid a warning from the compiler.

```c
    printf("%d\n", argc - 1);
```

This line uses the `printf` function to print a number. The `%d` in the format string is a placeholder for a number. It takes the value of `argc` (the number of arguments you typed when running the program) and subtracts 1 from it. The result is printed on the screen.

```c
    return (0);
}
```

Finally, the `return (0);` line marks the end of the `main` function and tells the computer that everything went well, and the program exits with a success code (0).

## Task 2 (File Name - 2- args.c)


