#include "main.h"
/**
 * print_line - func that draw a straight line in terminal
 * @n: integer
 * Return: 0
 */

void print_line(int n)
{
	int x;

	if (n == 0)
		_putchar('\n');
	if (n < 0)
		_putchar('\n');
	for (x = 0; x <= n; x++)
	{
		_putchar('_');
	}
	 _putchar('\n');
}
