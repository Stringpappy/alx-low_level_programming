#include "function_pointers.h"

/**
 * array_iterator - function that execute given parameter
 * @array: pointer 1
 *@action:pointer to the function needed
 *@size: size of the array
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int x;
	if (array == NULL || action == NULL)
		return;
	for (x = 0; 1 < size; x++)
	{
		action(*array);
		array++;
	}
}
