#include "main.h"

/**
 *print_last_digit - printing last digit of a number
 * @n: Number to be treated
 * Return: The last digit value of a number
 */

int print_last_digit(int n)

{

	int l;

	l = n % 10;

	if (l < 0)
	{
	l = l * -1;
	}
	_putchar(l + '0');
	return (l);
}
