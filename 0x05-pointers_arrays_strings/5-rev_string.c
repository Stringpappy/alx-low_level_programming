#include "main.h"

/**
 * rev_string - a reverse string
 * @s: input string
 * Return : always 0
 */

void rev_string(char *s)
{
	char temp;
	int i, count, count_2;

	count = 0;
	count_2 = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	count_2 = count - 1;

	for (i = 0; i < count / 2; i++)
	{
		temp = s[i];
		s[i] = s[count_2];
		s[count_2--] = temp;
	}
}
