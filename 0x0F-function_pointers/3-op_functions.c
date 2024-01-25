#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sum of two numbers
 * @a:first num
 * @b: second num
 * Return: Always a + b
 */
int op_add(int a, int b)
{
	int add;

	add = a + b;
	return (add);
}

/**
 * op_sub - subtraction  of two numbers
 * @a:first num
 * @b: second num
 * Return: Always a - b
 */

int  op_sub(int a, int b)
{
	int sub;
	sub = a - b;
	return (sub);
}


/**
 * op_mul  - multiplication of two numbers
 * @a:first num
 * @b: second num
 * Return: Always a * b
 */
int op_mul(int a, int b)
{
	return (a *b);
}


/**
 * op_div - division of two numbers
 * @a:first num
 * @b: second num
 * Return: Always a / b
 */
int op_div(int a, int b)
	{
	return (a / b);
}

/**
 * op_div - division of two numbers
 * @a:first num
 * @b: second num
 * Return: Always a / b
 */
int op_mod(int a, int b)
{
	return( a % b);
}
