#include "main.h"

/**
 * swap_int - swap the value of two integers
 * @n: integer1 to swap
 * @b: integer2 to swap
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
