#include "main.h"

/**
 * jack_bauer - Prints the minutes of a day
 * putchar_hour  - displays hour in Jack Bauer
 * putchar_minute - displays minutes in Jack Bauer
 * putchar_minute - separates hours & minutes
 *
 */

void putchar_hour(int hour)
{
	putchar((hour / 10) + '0');
	putchar((hour % 10) + '0');
}

void putchar_colon(void)
{
	putchar(':');
}

void putchar_minute(int minute)
{
	putchar((minute / 10) + '0');
	putchar((minute % 10) + '0');
}

void putchar_newline(void)
{
	putchar('\n');
}

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
		 putchar_hour(hour);
		 putchar_colon();
		 putchar_minute(minute);
		 putchar_newline();
		}
	}
}
