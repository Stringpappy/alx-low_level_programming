#include "variadic_functions.h"
/**
 * print_numbers - function that printts numbers
 * @separator: pointer
 * @n: integers
 *Retturn: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count, i;
	va_list folder;

	va_start(folder, n);

	for (count = 0; count < n; count++)
	{
		i = va_arg(folder, const unsigned int);
		printf("%d", i);
			if (count != (n - 1) && separator != NULL)
			{
				printf("%s", separator);
			}
	}
		printf("\n");
		va_end(folder);
}
