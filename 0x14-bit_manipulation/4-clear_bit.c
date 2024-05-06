#include "main.h"
/**
 * clear_bit - set value of a bit to zero
 * @n: parameter
 * @index: num index
 * Return: 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 0)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
