#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: ALways 0 (success)
 */
int main(void)
{
	int x, y;

	for (x = '0'; x < '9'; x++)
	{
	for (y = x + 1; y <= '9'; y++)
	{
	if (y != x)
	{
	putchar(x);
	putchar(y);
	if (x == '8' && y == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	return (0);
}
