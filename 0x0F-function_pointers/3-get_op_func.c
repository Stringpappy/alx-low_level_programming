#include "3-calc.h"
/**
 * get_op_func - Selects the appropriate function to perform the specified
 *               arithmetic operation based on the user-provided operator.
 * @s: The operator as a string (e.g., "+", "-", "*", "/", "%").
 *
 * Return: A pointer to the function that performs the operation corresponding
 *         to the provided operator. Returns NULL if the operator is not found.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}

