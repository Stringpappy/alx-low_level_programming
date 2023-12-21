#include "main.h"

/**
 * jack_bauer - Prints evey minute of the day of Jack
 * Return: ++++
 */

void jack_bauer(void)
{
	int hour, minute;


	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((hour / 10) + 48);
			_putchar((hour % 10) + 48);
			_putchar(':');
			_putchar((minute / 10) + 48);
			_putchar((minute % 10) + 48);
			_putchar('\n');
		}
	}
}
