#include "main.h"

/**
* main - Print_alphabet  Instead of entry point
*Return: Always 0 (success)
*/
void print_alphabet(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
	_putchar(alph);
	alph++;
	}
	_putchar('\n');
}
