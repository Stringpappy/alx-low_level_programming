#include "variadic_functions.h"
/**
 * print_all - print argument sent to func
 * @format: argument specifier
 * @...: variadic
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";

	va_list folder;

	va_start(folder, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(folder, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(folder, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(folder, double));
					break;
				case 's':
					str = va_arg(folder, char *);
					if (!str)
						str = "(nill";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
				i++;
		}
	}
	printf("\n");
	va_end(folder);
}
