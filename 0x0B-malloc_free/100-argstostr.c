#include <stdlib.h>

/**
 * argstostr - unction that concatenates all the arguments of your program.
 * @ac: args counter
 * @av: args holder*
 * Return: 0
*/

char *argstostr(int ac, char **av)
{
	int x, y, z, len;
	char *t;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
			len++;
		len++;
	}

	t = malloc((len + 1) * sizeof(char));
	if (t == NULL)
		return (NULL);

	z = 0;
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			t[z] = av[x][y];
			z++;
		}
		t[z] = '\n';
		z++;
	}
	t[z] = '\0';

	return (t);
}
