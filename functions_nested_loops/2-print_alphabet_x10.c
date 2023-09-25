#include "main.h"

/**
 * main - Prints _putchar.
 *
 * Return: Always 0 (Success)
 *
 */


#include <stdio.h>

void _putchar(char c) 
{
       	putchar(c);
}

void print_alphabet(void) {
       	char letter = 'a';
       	while (letter <= 'z') {
	       	_putchar(letter)
		       	letter++;
    }
       	_putchar('\n');

int main()
{
    /*Call the print_alphabet function to print the alphabet*/
    print_alphabet();
    return 0;
}

