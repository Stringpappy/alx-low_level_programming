#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
* append_tex_to _file - func that
* @filename:
* @text_content: text to be appended
*Return: 1 or -1
*/
int append_tex_to_file(char *filename, char *text_content)
{
int file, _write;

if (!filename)
return (-1);

file = open(filename, O_WRONLY | O_APPEND);
if (file == -1)
return (-1);

if (!text_content)
{
close(file);
return (1);
}

_write = write(file, text_content, strlen(text_content));
if (_write == -1)
{
	close(file);
	return(-1);
}
	close(file);
	return (1);
}
