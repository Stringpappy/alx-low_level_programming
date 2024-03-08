#include "main.h"
/**
 * factorial - func that returnfactorial of a num
 *  @n: integer to b input
 *  Return: 0
 */
int factorial(int n)
{
	int fact;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	fact = n * factorial(n - 1);
	return (fact);
}
