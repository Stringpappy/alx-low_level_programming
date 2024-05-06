#include "main.h"
/**
 *_pow - function thatclculate base and power
 *@base: base of the exponential
 *@power: power of a num
 *Return: 0
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int fig, x;

	fig = 1;
	for (x = 1; x <= power; x++)
		fig *= base;
	return (fig);
}



/**
 *print_binary - print in binary form
 *@n: num to be printed
 *Return: void
 */
void print_binary(unsigned long int n)
{

	unsigned long int div, check;
	char flag;

	flag = 0;
	div = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		check = n & div;
		if (check == div)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}

