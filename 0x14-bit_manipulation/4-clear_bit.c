#include "main.h"
/**
*clear_bit - func that set the value of a bit to 0
*@n:pointer
*@index:integer
*Return: 0
*/


int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
	return (-1);
	n &= (1 << index); return (1);
}
