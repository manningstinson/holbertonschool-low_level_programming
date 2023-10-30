#include "3-calc.h"
#include <string.h>

int (*get_op_func(char *s))(int, int)
{
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };

    int i = 0;
    int found = 0;

    while (ops[i].op != NULL && !found)
    {
        found = (strcmp(s, ops[i].op) == 0);
        i++;
    }

    return found ? ops[i - 1].f : NULL;
}

