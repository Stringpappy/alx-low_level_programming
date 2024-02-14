#include "main.h"
/**
 * print_binary - function that prints the binary rep of a num
 * @n:integer
 */
void print_binary(unsigned long int n)
{
	unsigned long int d, c;
	char rep;

	rep = 0;
	d = __pow(2, sizeof(unsigned int) * 8 - 1);
	while (d != 0)
	{
		c = n & d;
		if (c == d)
		{
			rep = 1;
			_putchar('1');
		}
		else if (rep == 1 || d == 1)
		{
			_putchar('0');
		}
		d >>= 1;
	}
}
