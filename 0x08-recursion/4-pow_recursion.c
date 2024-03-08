#include "main.h"
/**
 * _pow_recursion - functions that returns the value x raise to y
 * @x:first int
 * @y:second int
 * Return:0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y != 0)
		return (x * _pow_recursion(x, y - 1));
	return (0);
}
