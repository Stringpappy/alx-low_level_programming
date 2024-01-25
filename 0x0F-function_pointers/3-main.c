#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - where to execute the functions
 * @argc: argument count
 * @argv: argument vector
 * Return:results of all calc
 */
int main(int argc, char *argv[])
{
	char *op; 
	int num1, num2;

	if (argc != 4)
	{
		printf("error\n");
		exit (98);
	}
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit (99);
	}
	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit (100);
	}

	printf("%d\n", get_op_func(op)(num1,num2));
	return (0);
}
