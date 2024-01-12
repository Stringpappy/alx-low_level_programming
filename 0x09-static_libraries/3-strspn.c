#include "main.h"
/**
 *  _strspn -   function that gets the length of a prefix substring
 *  @s:input
 *  \@accept: input
 *  Return: Always n
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int root = 0;
	int count;

	while (*s)
	{
		for (count = 0; accept[count]; count++)
		{
			if (*s == accept[count])
			{
				root++;
				break;
			}
			else if (accept[count + 1] == '\0')
				return (root);
		}
		s++;
	}
	return (0);
}
