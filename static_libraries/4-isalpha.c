#include "main.h"

/**
 * _isalpha - Shows 1 if the input is a
 * letter Another cases, shows 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for letters. 0 for the rest.
 */

int _isalpha(int c)
{
	/* Check if c is a letter (lowercase or uppercase)*/
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{

	/*It's a letter*/
		return (1);
	}
		else
	{
	/* It's not a letter*/
		return (0);
		}
}
