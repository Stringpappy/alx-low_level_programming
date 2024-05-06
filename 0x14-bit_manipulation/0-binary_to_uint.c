#include "main.h"
/**
 * binary_to_uint - func that conver a binary nu to unsigned int
 *@b:pointer
 *Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int fig;

	if (!b)
		return (0);

	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
	}
	for (x = 0; b[x] != '\0'; x++)
	{
		fig <<= 1;
		if (b[x] == '1')
			fig += 1;
	}
	return (fig);
}
