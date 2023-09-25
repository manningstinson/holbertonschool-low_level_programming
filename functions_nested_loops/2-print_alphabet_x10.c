#include "main.h"


/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)

{	int count;
	char letter;

	/* This loop runs 10 times*/
	for (count = 0; count < 10; count++)
	{
		/* This loop prints the alphabet*/
		for (letter = 'a'; letter <= 'z'; letter++)

		{
			_putchar(letter);
		}

	 /* Print a newline character after each alphabet*/
			_putchar('\n');
	}
}
