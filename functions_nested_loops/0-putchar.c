#include "main.h"
#include <unistd.h>

/**
 * main - Prints _putchar.
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char str[] = "_putchar\n";
		write(1, str, sizeof(str) - 1);
	return (0);
}
