#include "3-calc.h"

/**
 * op_add - The func that calculates the sum of two integers
 * @a: integer 1
 * @b: integer 2
 *
 * Return: a+ b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - The func that calculates the difference of two integers
 * @a: integer 1
 * @b: integer 2
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - The func that calculates the product of two integers
 * @a: integer 1
 * @b: integer 2
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - The func that calculates the division of two integers
 * @a: integer 1
 * @b: integer 2
 * Return: a - b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - The func that calculates the remainder of the division of two int
 * @a: first integer
 * @b: second integer
 * Return: remainder of a divided b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
