#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  Entry point
 * Return: ALways 0 (success)
 */
int main(void)
{
	char lowcase;

	for (lowcase = 'z'; lowcase >= 'a'; lowcase--)
		putchar(lowcase);
	putchar('\n');

	return (0);
}
