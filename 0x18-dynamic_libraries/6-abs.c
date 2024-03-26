#include "main.h"

/**
 * _abs- Computes the absoulute value of an integer.
 * @c: Computing number.
 * Return: Absoulute value of number 0
 */

int _abs(int c)
{
	if (c < 0)
	{
		int val;

		val = c * -1;
		return (val);
	}
	return (c);
}
