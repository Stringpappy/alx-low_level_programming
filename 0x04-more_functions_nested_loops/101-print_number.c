#include "main.h"

/**
 * print_integer - prints an integer to standard output.
 * @num: the integer to print.
 * Return: no return.
 */
void print_number(int n)
{
    unsigned int abs_num, divisor, factor;

    if (n < 0)
    {
        _putchar('-');
        abs_num = -n;
    }
    else
    {
        abs_num = n;
    }

    divisor = abs_num;
    factor = 1;

    while (divisor > 9)
    {
        divisor /= 10;
        factor *= 10;
    }

    while (factor >= 1)
    {
        _putchar(((abs_num / factor) % 10) + '0');
        factor /= 10;
    }
}

