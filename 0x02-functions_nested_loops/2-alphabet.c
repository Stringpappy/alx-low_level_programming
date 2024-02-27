#include "main.h"

/**
 * print_alphabet_x10 - print ten times a number
 * Return: nothing
 */ 
 void print_alphabet(void)
{
	char ap;
	int count;

	for (count = 0; count <= 10; count++)
	{
		for (ap = 'a'; ap <= 'z'; ap++)
		{
			_putchar(ap);
			_putchar('\n');
		}
	}
}
