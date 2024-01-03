#include "main.h"

/**
 * puts_half - half of a string
 * @str: paremeter
 *Return: Always 0
 */

void puts_half(char *str)
{
	int length;
	int index;
	int half_L;

	length = 0;

	for (index = 0; str[index] != '\0'; index++)
	{
		length += 1;
	}
	if (length % 2 == 0)
	{
		half_L = length / 2;
	}
	else
	{
		half_L = (length - 1) / 2;
	}
	for (index = half_L; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
		_putchar('\n');
}
