#include <stdio.h>
#include "3-calc.h"

/**
 * main - Entry point of the calculator program
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, other values on failure
 */

int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
        int num2 = atoi(argv[3]);
        char *operator = argv[2];
        int (*operation)(int, int) = get_op_func(operator);
	int result = operation(num1, num2);


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", result);
	return (0);
}
