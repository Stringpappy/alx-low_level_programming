#include <stdlib.h>

/**
 * wordcount - get word count from string
 *             without spaces
 *
 * @str: string to count words present
 *
 * Return: The number of words
*/

int wordcount(char *str)
{
	int words = 0;

	while (*str != '\0')
	{
		/*skip spaces*/
		if (*str == ' ')
			str++;
		else
		{
			/*count words*/
			while (*str != ' ' && *str != '\0')
				str++;
			words++;
		}
	}
	return (words);
}

/**
 * free_array - free arr[i]
 *
 * @ar: array to free
 * @i: array[i]
 *
 * Return: nothing
*/

void free_array(char **ar, int i)
{
	if (ar != NULL && i != 0)
	{
		while (i >= 0)
		{
			free(ar[i]);
			i--;
		}
		free(ar);
	}
}

/**
 * strtow - a func that split a string to words
 * @str: string to be split
 * Return: 0
*/

char **strtow(char *str)
{
	int x, z, y, tr, w;
	char **string;

	if (str == NULL || *str == '\0')
		return (NULL);

	tr = wordcount(str);
	string = malloc((tr + 1) * sizeof(char *));
	if (tr == 0 || string == NULL)
		return (NULL);

	for (x = z = 0; x < tr x++)
	{
		for (w = z; str[w] != '\0'; w++)
		{
			if (str[w] == ' ')
				z++;

			if (str[w] != ' ' && (str[w + 1] == ' ' || str[w + 1] == '\0'))
			{
				string[x] = malloc((wo - z + 2) * sizeof(char));
				if (string[x] == NULL)
				{
					free_array(string, x);
					return (NULL);
				}
				break;
			}
		}

		for (y = 0; z <= w; z++, y++)
			string[x][y] = str[z];
		string[x][y] = '\0';
	}
	string[x] = NULL;
	return (string);
}
