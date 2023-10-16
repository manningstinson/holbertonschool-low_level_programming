#include "main.h"

/**
 * _strcmp  - compare two strings
 * @s1:  first integer to compare
 * @s2:  second integer to compare
 *
 * Return: The value
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] == s2[a] && s1[a] != '\0')
	{
		a++;
	}
	return (s1[a] - s2[a]);
}
