#include "main.h"
/**
 * array_range - function that creates an array of integers
 * @min: integer 1
 * @max: integer
 * Return:0
 */
int *array_range(int min, int max)
{
	int x, length;
	int *p;

	x = 0;
	if (min > max)
		return (NULL);
	length = max - min + 1;
	p = malloc(sizeof(int) * length);
	if (p == NULL)
		return (NULL);
	while (min <= max)
	{
		p[x] = min;
		x++;
		min++;
	}
	return (p);
}
