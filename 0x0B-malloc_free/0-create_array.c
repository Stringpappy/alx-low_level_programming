#include "main.h"

/**
 * create_array - func that creates an array of chars, and initializes.
 * @c: char to be inputed
 * @size: sizeof chr to asign
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int n;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * size);

	if (str == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < size; n++)
		str[n] = c;
	return (str);
}
