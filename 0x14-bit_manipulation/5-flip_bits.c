#include "main.h"
/**
* flip_bits - function that returns the number of bits
*@n:pointer
*@m: integer
*Return: 0
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, count = 0;
	unsigned long int c;
	unsigned long int e = n ^  m;

	for (a = 63; a >= 0; a--)
	{
		c = e >> a;
		if (c & 1)
		{
			count++;
		}
	}
	return (count);
}
