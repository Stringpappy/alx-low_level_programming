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
	
        int start = 0;

        for (; (s[start] == c);)
        {
                if (s[start] == c)

                        return (&s[start]);
        }
        return (0);
}
