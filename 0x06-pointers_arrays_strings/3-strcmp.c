#include "main.h"

/**
 * _strcmp - functon that compare two strings
 * @s1: first string
 * @s2: second string
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int x;
	int flag;

	x = 0;

	while (s1[x] != '\0' && s2[x] != '\0')
	{
		if (s1[x] != s2[x])
		{
			flag = (s1[x] - s2[x]);
			break;
		}
		x++;
	}
	return (flag);
}
