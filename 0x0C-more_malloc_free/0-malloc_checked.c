#include "main.h"
#include <stdlib.h>

/**
 *  malloc_checked - function that allocate memory
 *  @b:input  integer
 *  Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
