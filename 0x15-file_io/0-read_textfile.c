#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - func that read a text and prints it to the POSI output
 * @filename: pointer yo fname
 * @letters:char
 * Return:0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int count;

	ssize_t _read, _write;

	char *buffer;

	if (!filename)
		return (0);
	count = open(filename, O_RDONLY);
	if (count == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	_read = read(count, buffer, letters);
	if (_read == -1)
	{
		free(buffer);
		close(count);
		return (0);
	}
	_write = write(STDOUT_FILENO, buffer, _read);
	if (_write == -1)
	{
		free(buffer);
		close(count);
		return (0);
	}
	close(count);
	return (_read);
}
