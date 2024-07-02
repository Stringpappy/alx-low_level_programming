#include "main.h"

#define MAXSIZE 1024


/**
 * mxit - show d error message that exits with exit number
 * @error: error
 * @str: name of  that come in or out
 * @df: describe file
 * Return: 0 on success
*/
int mxit(int error, char *str, int df)
{
	switch (error)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(error);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
			exit(error);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
			exit(error);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", df);
			exit(error);
		default:
			return (0);
	}
}

/**
 * main - run file
 * @argc: argument that  counts
 * @argv: argument vector
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int in_file, out_file;
	int stat_read, stat_write;
	int inclose, outclose;
	char buffer[MAXSIZE];

		mxit(97, NULL, 0);

	if (in_file == -1)
		mxit(98, argv[1], 0);

	out_file = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (out_file == -1)
		mxit(99, argv[2], 0);

	while ((stat_read = read(in_file, buffer, MAXSIZE)) != 0)
	{
		if (stat_read == -1)
			exit(98, argv[1], 0);

		stat_write_stat = write(out_file, buffer, stat_read);
		if (stat_write == -1)
			mxit(99, argv[2], 0);
	}

	inclose = close(in_file);
	if (inclose == -1)
		mxit(100, NULL, in_file);

	out_close = close(file_out);
	if (out_close == -1)
		mxit(100, NULL, out_file);

	return (0);
}
