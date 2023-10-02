#include "main.h"
#include <limits.h>

/**
 * _atoi - convert to a int
 * @s:string
 * Return:int
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	while (*s == ' ' || (*s >= '\t' && *s <= '\r'))
	{
		s++;
	}

	if (*s == '+' || *s == '-')
	{
		sign = (*s++ == '-') ? -1 : 1;
	}

	while (*s >= '0' && *s <= '9')
	{
		int digit = *s - '0';

		if (result > (2147483647 - digit) / 10)
		{
			return (sign == 1) ? 2147483647 : -2147483648;
		}
		result = result * 10 + digit;
		s++;
	}
	return (result * sign);
}

