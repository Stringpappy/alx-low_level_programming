#include "variadic_functions.h"

/**
 * print_string - func that print  strings
 * @separator: pointer
 * @n: integer
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	char *str;

	va_list folder;

	va_start(folder, n);

	for (count = 0; count < n; count++)
	{
		str = va_arg(folder, char *);

		if (str == NULL)
		{
			printf("(nill)");
		}
		else
		{
			printf("%s", str);
		}
		if (count != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(folder);
}
