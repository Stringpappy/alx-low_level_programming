#include "function_pointers.h"

/**
 * print_name - function that print a name
 * @ name:name of person
 * @f: pointer to hold the string name o
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
