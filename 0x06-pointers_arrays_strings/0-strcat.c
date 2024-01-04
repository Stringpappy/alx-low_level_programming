#include "main.h"

/**
 * *_strcat - function that concatenete two stringd
 * @dest: first string
 * @src: second string
 *  Return: ALways 0
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int j;

	a = 0;
	while ((dest[a] != '\0'))
	{
		a++;
	}
	j = 0;
	while ((src[j] != '\0'))
	{
		dest[a] = src[j];
		j++;
		j++;
	}

	dest[a] = '\0';
	return (dest);
}
