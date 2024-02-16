#include "main.h"
/**
* create_file - func that create  file with giventxt content
* @filename: file to be created
* @text_content:  a pointer
* Return: 1 or -1
*/
int create_file(const char *filename, char *text_content)
{
	int the_file, outcome = 1, count = 0;

	if (!filename)
		return (-1);
	the_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (the_file == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[count])
			count++;
		outcome = write(the_file, text_content, count);
	}
	if (outcome  == -1)
		return (-1);
	close(the_file);
	return (1);

}
