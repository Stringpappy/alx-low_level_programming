#include "main.h"

/**
 * print_diagonal - func that draw a diagonal line
 * @n: number of time diagonal line is to be drawn
 * Return:0
 */
void print_diagonal(int n)
{
	int y, x;

	if (n <=  0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < n; y++)
			{
				if (y == x)
					_putchar('\\');
				else if	(y < x)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
