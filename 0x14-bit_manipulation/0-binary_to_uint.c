#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer
 * Return: num
 */
unsigned int binary_to_uint(const char *b)
{
	int count;

	if (b != NULL)
	{
		for (count = 0; b[count] != '\0'; count++)
		{
			if (b[count] != 0 && b[count] != 1)
			{
				return (0);
			}
			else if (b[count] == 1 || b[count] == 0)
			{
				return (b[count]);	
			}
		}
	}
	else
		return (NULL);
