#include "main.h"
#include <stdio.h>

/**
 * error_file - the func that checks if files can be opened.
 * @file_from: file_from.
 * @file_to: to_file
 * @argv: arguments vector.
 * Return: 0
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - the func that check the code for Holberton School students.
 * @argcarguments count.
 * @argv: arguments param.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, close_err;
	ssize_t nchars, frh;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(file_from, buf, 1024);
		if (nchars == -1)
			error_file(-1, 0, argv);
		frh = write(file_to, buf, nchars);
		if (frh == -1)
			error_file(0, -1, argv);
	}

	close_err = close(file_from);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",file_from);
		exit(100);
	}

	close_err = close(file_to);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
