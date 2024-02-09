#include "main.h"
/**
* set_bit - func that set the value of a bit to 1 to r
*@index: integer
*@n:pointer
*@index:integer2
*Return:0
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int sb;
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
sb = 1 << index;
*n = *n | sb;
return (1);
}
