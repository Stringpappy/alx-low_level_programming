#include "main.h"

/**
 * _memcpy - a function that copies memry area
 * @dest: to be placed
 * @src:to be copied
 * @n: number of byte
 * Return:dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int index = 0;
	int work = n;

	for (; index < work; index++)
	{
		dest[index] = src[index];
		n--;
	}
	return (dest);
}
