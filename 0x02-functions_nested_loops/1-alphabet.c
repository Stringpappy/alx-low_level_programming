#include "main.h"

/**
* main - Entry point
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