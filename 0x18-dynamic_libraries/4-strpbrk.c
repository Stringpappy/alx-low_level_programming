#include "main.h"

/**
 * *_strpbrk - function that searches a string for any of a set of bytes
 * @s: pointer 1
 * @accept: pointer 2
 * Return: return 0
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return ('\0');
}
