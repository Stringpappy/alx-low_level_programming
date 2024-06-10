#include "main.h"
/**
 * print_square - function that prints a square
 * @size: integer
 * Return: 0
 */
void print_square(int size)
{
	int a, b;

	b = 0;
	if (size < 1)
	{
		_putchar('\n');
		return;
	}
	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
