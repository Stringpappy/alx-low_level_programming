#include "function_pointers.h"

/**
 * print_name - function that print a name
 * @ name: pointer
 * @f: pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	 printf("my name is %s\n", name);
}
