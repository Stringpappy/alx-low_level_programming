#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: ALways 0 (success)
 */
int main(void)
{
	int n;
	char lowcase;

	for (n = '0'; n <= '9'; n++)
	putchar(n);

	for (lowcase = 'a'; lowcase <= 'f'; lowcase++)
	putchar(lowcase);
	putchar('\n');

	return (0);
}


