#include "main.h"

/**
 * puts2 - starting with the first char
 * @str: input
 * Retun: 0
 */

void puts2(char *str)
{
	int lenght = 0;
	int r = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		lenght++;
	}
	r = lenght - 1;
	for (o = 0; o <= r; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
		}
		_putchar('\n');

}
