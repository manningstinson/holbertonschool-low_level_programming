#include <stdio.h>

/**
 * main - Prints the alphabet
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int i;/* Declare an integer for the loop counter*/

	{
	for (i = 0; i < 10; i++)
	putchar(i + '0');/* Print the current number as a character*/
	}
	putchar('\n');/* Start a new line*/
	return (0);
}
