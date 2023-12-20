#include "main.h"

/**
 * _isalpha(int c)
 * @c: for alphabet char 1 or for anything else 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
