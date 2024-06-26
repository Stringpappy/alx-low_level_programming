#include "function_pointers.h"

/**
 * int_index - function that seraches for an integer
 * @array: pointer
 * @size: size of the int
 * @cmp:func pointer
 * Return: Always 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) != 0)
			return (x);
	}
	return (-1);
}
