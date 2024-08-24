#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own function.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * This program takes a single command-line argument, which specifies
 * the number of bytes of opcodes to print from the `main` function.
 * It prints the opcodes in hexadecimal format, separated by spaces,
 * and ends with a newline character.
 *
 * Return: Always 0 (Success). Exits with 1 if the argument count
 * is incorrect, and with 2 if the argument is negative.
 */
int main(int argc, char *argv[])
{
	int num_bytes, index;
	char *opcode_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	opcode_ptr = (char *)main;
	for (index = 0; index < num_bytes; index++)
	{
		if (index == num_bytes - 1)
		{
			printf("%02hhx\n", opcode_ptr[index]);
			break;
		}
		printf("%02hhx ", opcode_ptr[index]);
	}
	return (0);
}
