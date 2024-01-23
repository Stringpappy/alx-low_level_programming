#include "main.h"

/**
 * create_array - function that creates an array of chars, and initializes it with a specific char.
 * @c: to be inputed
 * @size: size to asign
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char str;
 	unsigned int n;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
 	{
		return (NULL);
	}
	for (n = 0; n < size; n++)
		str[n] = c;
	return (str);
}
