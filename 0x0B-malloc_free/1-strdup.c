#include <stdlib.h>

/**
 * *_strdup - a function that duplicates a string
 *
 * @str: input string to duplicate
 *
 * Return: NULL if str == NULL
 *         @str
*/

char *_strdup(char *str)
{
	int x, y;
	char *p;

	x = 0;
	y = 0;

	if (str == NULL)
		return (NULL);

	while (str[y] != '\0')
		y++;

	p = malloc((y + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);

	while (str[x] != '\0')
	{
		p[x] = str[x];
		x++;
	}

	return (p);
}
