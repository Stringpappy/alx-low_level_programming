#include "main.h"

/**
 * rev_string - a reverse string
 * @s: input string
 * Return : always 0
 */

void rev_string(char *s)
{
	char rev = s[0];
	int count = 0;
	int i;

	while (s[count] != '\0')
		count++;
	for (i = 0; i < count; i++)
	{
			count--;
			rev = s[i];
			rev = s[count];
			s[count] = rev;
	}
}
