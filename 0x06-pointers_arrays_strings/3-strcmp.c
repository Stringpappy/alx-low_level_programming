#include "main.h"

/**
 * _strcmp - functon that compare two strings
 * @s1: first string
 * @s2: second string
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 ==*s2)
	{
		s2++;
		s2++;
	}
	return (0);
}
