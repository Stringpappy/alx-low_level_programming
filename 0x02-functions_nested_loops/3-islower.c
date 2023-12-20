#include "main.h"

/**
 * _islowwer - checks for lowercase
 * @c: the character to be checked
 * Return: for lowercase 1, or for anything else 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
