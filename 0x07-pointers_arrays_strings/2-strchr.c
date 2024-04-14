#include "main.h"
#include "main.h"

/**
 * _strchr - FUNCTION THAT LOCATE A CHARRACTER IN A STRING
 * @s:char pointer
 * @c: char
 * Return:0
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] ==  c)
		{
			return i; // return the index if character is found
		}
    }
    return -1; // return -1 if character is not found
}
