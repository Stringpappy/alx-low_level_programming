#include "main.h"
/**
* get_bit - fun that return the value of a bit at given index
*gven
*@n:integer
*@index: integer2
*Return: 0
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int d, c;
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
d = 1 << index;
c = n & d;
if (c == d)
{
return (1);
}
return (0);
}
