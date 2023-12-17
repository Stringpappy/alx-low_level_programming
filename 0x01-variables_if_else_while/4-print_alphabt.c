#include <stdio.h>

/** 
 * main - Entry
 * Return: Always 0 (success)
 */
int main(void)
{
	char lowcase, e, q;
	 
	e = 'e';
	q = 'q';

	for (lowcase = 'a'; lowcase <= 'z'; lowcase++)
	{
	if (lowcase != e && lowcase !=q)
	putchar(lowcase);
	}
	putchar('\n');
	return (0);
}
