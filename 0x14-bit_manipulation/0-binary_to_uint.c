#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer
 * Return: num
 */
unsigned int binary_to_uint(const char *b)
{
	int count;
	unsigned int num;

	if (!b)
		return (0);
	for (count = 0; b[count] != '\0'; count++)
	{
		if (b[count] != 0 && b[count] != 1)
		{
			return (0);
		}
	}
	for (count = 0; b[count] != '\0'; count++)
	{num <<= 1;
		if (b[count] == 1)
			num += 1;
	}
	return (num);
}


