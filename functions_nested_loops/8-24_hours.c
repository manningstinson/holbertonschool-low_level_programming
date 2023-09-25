#include "main.h"

/**
 * jack_bauer - display time 24h.
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int a, b, c, d, e, f;

	for (a = 0; a < 24 ; a++)
	{
		c = a / 10;
		d = a % 10;
		for (b = 0; b < 60; b++)
		{
			e = b / 10;
			f = b % 10;
			_putchar('0' + c);
			_putchar('0' + d);
			_putchar(':');
			_putchar('0' + e);
			_putchar('0' + f);
			_putchar('\n');
		}
	}
}
