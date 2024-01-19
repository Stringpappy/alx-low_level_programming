#include "main.h"
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: the unsigned value
 * @size: size of int
 * Return: point
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *point;
	size_t x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	point = malloc(nmemb * size);
	if (point == NULL)
		return (NULL);
	for (x = 0; x < (nmemb * size); x++)
		point[x] = 0;
	return (point);
}
