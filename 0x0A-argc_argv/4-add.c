#include <stdio.h>
#include "main.h"

/**
 * _atoi - func that converts a string to an integer
 * @s: str to be converted
 *
 * Return:0
 */
int _atoi(char *s)
{
	int x, d, n, lent, f, digit;

	x = 0;
	d = 0;
	n = 0;
	lent = 0;
	f = 0;
	digit = 0;

	while (s[lent] != '\0')
		lent++;

	while (x < lent && f == 0)
	{
		if (s[x] == '-')
			++d;

		if (s[x] >= '0' && s[x] <= '9')
		{
			digit = s[x] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			f = 0;
		}
		x++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - adds two positive number
 * @argc: number of arguments
 * @argv: array of arguents
 *
 * Return: 0 (Success), or 1 (Success)
 */
int main(int argc, char *argv[])
{
	int add, numb, x, y, z;

	add = 0;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] > '9' || argv[x][y] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (z = 1; z < argc; z++)
	{
		numb =  _atoi(argv[z]);
		if (numb >= 0)
			add += numb;
		
		
	}
	printf("%d\n", add);
	return (0);
}
