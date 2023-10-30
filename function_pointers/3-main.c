#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(int argc, char *argv[]) {
    int a, b, result;
    int (*fun)(int, int);

    if (argc != 4 || (get_op_func(argv[2]) == NULL) || argv[2][1] != '\0') {
        printf("Error\n");
        return (98 + !argc - !(get_op_func(argv[2]) == NULL) - (argv[2][1] != '\0'));
    }

    a = atoi(argv[1]);
    b = atoi(argv[3]);
    fun = get_op_func(argv[2]);
    result = fun(a, b);
    printf("%d\n", result);
    return 0;
}
