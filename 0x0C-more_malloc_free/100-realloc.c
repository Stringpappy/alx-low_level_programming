#include "main.h"
/**
 * _realloc -  function that reallocates a memory block using malloc
 * @ptr: pointer
 * @old_size: integer
 * @new_size:integer
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pointer;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		pointer = malloc(new_size);
		if (pointer == NULL)
			return (NULL);
		return (pointer);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
				return (NULL);
		}
	}
	pointer = malloc(new_size);
	if (pointer == NULL)
		return (NULL);
	for (x = 0; x < old_size && x < new_size; x++)
	{
		pointer[x] = ((char *) ptr)[x];
	}
	free(ptr);
	return (pointer);
}
