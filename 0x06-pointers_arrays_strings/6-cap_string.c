#include "main.h"

/**
 *  cap_string -  function that capitalizes all words of a string
 *  @str: to be capitalizeed
 *  Return: pointer
 */
char *cap_string(char *str)
{
	int index;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;
		if (str[index] == ' ' ||
		str[index - 1] == '\t' ||
		str[index - 1] == 'n' ||
		str[index - 1] == ',' ||
		str[index - 1] == ':' ||
		str[index - 1] == '.' ||
		str[index - 1] == '!' ||
		str[index - 1] == '?' ||
		str[index - 1] == '"' ||
		str[index - 1] == '(' ||
		str[index - 1] == ')' ||
		str[index - 1] == '{' ||
		str[index - 1] == '}' ||
		index == 0)
			str[index] -= 32;
		index++;
	}

	return (str);
}
