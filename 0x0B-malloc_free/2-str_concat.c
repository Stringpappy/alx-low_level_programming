#include <stdlib.h>

/**
 * str_concat - func that concat two strings.
 * @s1: string1 one input
 * @s2: string two input
 * Return: NULL on faliure
*/

char *str_concat(char *s1, char *s2)
{
	int c = 0, d = 0;
	int x, y;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[c] != '\0')
		c++;
	while (s2[d] != '\0')
		d++;

	p = malloc((sizeof(char) * c) + ((d + 1) * sizeof(char)));

	if (p == NULL)
		return (NULL);

	for (x = 0; s1[x] != '\0'; x++)
		p[x] = s1[x];
	for (y = 0; s2[y] != '\0'; y++)
	{
		p[x] = s2[y];
		x++;
	}

	p[x]  = '\0';

	return (p);
}
