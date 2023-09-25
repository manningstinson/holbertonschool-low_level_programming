#include "main.h"
/**
 * main - Prints _putchar.
 *
 * Return: Always 0 (Success)
 *
 */

#include <unistd.h>

int main(void)
{
	char str[] = "_putchar\n";
		write(1, str, sizeof(str) - 1);
	return (0);
}
