#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: argument count
 * @argv: argument value
 *
 * Return: int
 */

int main(int argc, char *argv[]) {
    int a, b, result;
    int (*fun)(int, int);

    if (argc != 4) {
        printf("Error\n");
        return (98);
    }

    a = atoi(argv[1]);
    b = atoi(argv[3]);

    if (argv[2][1] == '\0' && (fun = get_op_func(argv[2])) != NULL) {
        result = fun(a, b);
        printf("%d\n", result);
        return (0);
    }

    printf("Error\n");
    return (99);
}
