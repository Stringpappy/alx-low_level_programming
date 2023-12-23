#include "main.h"

/**
 * more_numbers - print 10x a number from 0 to 14
 * follwed by a new line
 */

void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10 ; x++)
	{
		for (y = 0; j < 15; y++)
		{
			if (j >= 10)
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
