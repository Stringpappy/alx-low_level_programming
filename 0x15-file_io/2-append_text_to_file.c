#include "main.h"

/**
 * append_text_to_file - the  func that appends text at the end
 * @filename: file to be added to data
 * @text_content: text content to be add to a file
 * Return:1 or 0
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int dfile, apt_st, words = 0;

	if (filename == NULL)
		return (-1);

	dfile = open(filename, O_APPEND | O_WRONLY);
	if (dfile == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[words] != '\0')
			words++;

		apt_st = write(dfile, text_content, words);
		if (apt_st == -1)
			return (-1);
	}

	close(dfile);
	return (1);
}
