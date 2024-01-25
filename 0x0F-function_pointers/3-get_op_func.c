#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_fun - selects the correct function to perform the operation
 * @s: operator passed as argument
 * Return: always 0
 */
int (*get_op_func(char *s))(int, int)
{
	option ops[]={
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	}
	int i;

	i = 0;
	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;
	return (ops[i].f);
}
