#include "main.h"

/**
 *  reverse_array - function that reverses the content of an arreat
 * @a: an array
 * @n: number of element of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x;
	int j;

	for (x = 0; x < n--; x++)
	{
		j = a[x];
		a[x] = a[n];
		a[n] = j;
	}
}
