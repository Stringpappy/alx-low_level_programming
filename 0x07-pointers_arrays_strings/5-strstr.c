#include "main.h"
/**
 * _strstc - func that locates a string
 * @haystack: pointer 1
 * @needle:pointer2
 * Return: void
 */
char *_strstr(char *haystack, char *needle)
{

	int c;

	if (!haystack)
		return (NULL);
	for (c = 0; c[haystack] != '\0'; c++)
	{
		needle[c] =  haystack[c];
	}
	return (needle);
}
