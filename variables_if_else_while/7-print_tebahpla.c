#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	char currentChar = 'z';/* Start with 'z', the last lowercase letter*/

	while (currentChar >= 'a')
	{
		putchar(currentChar);/* Print the current character*/
		currentChar--;/* Decrement to the previous character*/
	}
		putchar('\n');/* Start a new line*/
	return (0);
}
