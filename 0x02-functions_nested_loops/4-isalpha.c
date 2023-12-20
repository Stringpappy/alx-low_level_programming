#include "main.h"

/**
 * _isalpha - Is alpha
 * @c: for alphabet char 1 or for anything else 0
 * Return: Always 0 (success)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
