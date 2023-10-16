#include "main.h"

/**
 * _strspn - get the lenght of prefix substring
 * @s:string
 * @accept:string
 * Return:unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 0;
	int i = 0;

	while (*s)
	{
		found = 0;
		for (i = 0;  accept[i]; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}
		if (!found)
		{
			break;
		}
		count++;
		s++;
	}
	return (count);
}
