#include "3-calc.h"
/**
 * main - Performs a simple arithmetic operation based on user input.
 * @argc: The number of command-line arguments.
 * @argv: Array of command-line arguments. Expected format:
 *        argv[1] - first integer operand,
 *        argv[2] - operator (one of "+", "-", "*", "/", "%"),
 *        argv[3] - second integer operand.
 *
 * Return: Always 0 (Success).
 *
 * Description:
 * - Checks that exactly 4 arguments are provided. If not, prints "Error"
 *   and exits with status 98.
 * - Converts the string arguments for operands to integers.
 * - Retrieves the appropriate function for the specified operator using
 *   `get_op_func`. If the operator is invalid, prints "Error" and exits
 *   with status 99.
 * - Handles division and modulo by zero errors by printing "Error" and
 *   exiting with status 100 if the second operand is zero.
 * - Computes the result using the selected function and prints it.
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	char o;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	o = *argv[2];

	if ((o == '/' || o == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(arg1, arg2);

	printf("%d\n", result);

	return (0);
}

