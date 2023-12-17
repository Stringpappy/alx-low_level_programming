#include <stdio.h>

/**
 * main -- Entry
 * Return: ALways 0 (success)
 */

int main(void)
{
	char lowcase;

	for (lowcase = 'a'; lowcase <= 'z'; lowcase++)
	putchar(lowcase);

	for (lowcase = 'A'; lowcase <= 'Z' ; lowcase++)
	putchar(lowcase);
	putchar('\n');

	return (0);
}
