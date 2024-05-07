#include "main.h"

/**
 * print_diagonal - func that draw a diagonal line
 * @n: number of time diagonal line is to be drawn
 * Return:0
 */
void print_diagonal(int n)
{
	int x;

	if (n < 0)
		_putchar('\n');
	if (n == 0)
		_putchar('\n');
	for (x = 0; x <= n; x++)
	{
		_putchar('\');
		_putchar('\n');
	}
}
