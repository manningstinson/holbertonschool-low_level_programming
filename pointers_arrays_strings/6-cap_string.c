#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * cap_string - captilize all words in a string
 * @s:string
 * Return: address of modified string
 */

char *cap_string(char *s)
{
	int a = 0;
	int capitalize_next = 1;

	for (; s[a] != '\0'; a++)
	{
		if (
			s[a] == ' ' ||
			s[a] == '\t' ||
			s[a] == '\n' ||
			s[a] == ',' ||
			s[a] == ';' ||
			s[a] == '.' ||
			s[a] == '!' ||
			s[a] == '?' ||
			s[a] == '"' ||
			s[a] == '(' ||
			s[a] == ')' ||
			s[a] == '{' ||
			s[a] == '}')
		{
			capitalize_next = 1;
		}
		else
		{
			if (capitalize_next)
			{
				if (s[a] >= 'a' && s[a] <= 'z')
				{
					s[a] -= 'a' - 'A';
				}
				capitalize_next = 0;
			}
		}
	}
	return (s);
}
