#include "main.h"

/**
 * _isalpha - Check for alphabet
 * @c: Check character
 * Return: 1 for alphabet character or for anything else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
