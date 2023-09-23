#include <stdio.h>

/**
 * * main - Prints the alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char currentChar;

	for (currentChar = 'a'; currentChar <= 'z'; currentChar++)
	{
	if (currentChar != 'q' && currentChar != 'e')
	{
		putchar(currentChar);
		}
	}
		putchar('\n');
	return (0);
}
