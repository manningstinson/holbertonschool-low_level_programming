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

    if (argc != 4 || argv[2][1] != '\0' || (get_op_func(argv[2]) == NULL)) {
        printf("Error\n");
        return (98 + !argc - (argv[2][1] != '\0') - !(get_op_func(argv[2]) == NULL));
    }

    a = atoi(argv[1]);
    b = atoi(argv[3]);
    fun = get_op_func(argv[2]);
    result = fun(a, b);
    printf("%d\n", result);
    return 0;
}
