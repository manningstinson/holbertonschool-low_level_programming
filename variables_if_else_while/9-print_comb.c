#include <stdio.h>
/**
 * main - Prints the alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	/*	((i < 9) && putchar(',') && putchar(' '));*/
	}
	putchar('\n');
	return (0);
}
