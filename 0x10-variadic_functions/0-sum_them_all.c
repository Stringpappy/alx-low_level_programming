#include "variadic_functions.h"

/**
 * sum_them_all - function that add all int
 * @n: integer
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int  add = 0;
	unsigned int x = 0;

	va_list folder;

	va_start(folder, n);

	for (x = 0; x < n; x++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			add += va_arg(folder, const unsigned int);
		}
	}
	va_end(folder);
	return (add);
}
