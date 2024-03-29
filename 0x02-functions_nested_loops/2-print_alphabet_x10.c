#include "main.h"

/**
*print_alphabet_x10 - Entry point
*Return: Always 0 (success)
*/

void print_alphabet_x10(void)
{
	char ap;
	int count;

	for (count = 0; count <= 9; count++)
	{
		for (ap = 'a'; ap <= 'z'; ap++)
			_putchar(ap);
		_putchar('\n');
	}
}
