#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowercaseLetter = 'a';

	while (lowercaseLetter <= 'z')
	{
		putchar(lowercaseLetter);
		lowercaseLetter++;
	}
	putchar('\n');
	return (0);
}
