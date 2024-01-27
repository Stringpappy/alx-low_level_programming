#include "variadic_functions.h"

/**
 * print_all - print argument sent to func
 * @format: argument specifier
 * @...: variadic
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int x, chst;
	char *str;

	va_list folder;

	va_start(folder, format);
	x = 0;
	while (format  != NULL && format[x] != '\0')
	{
		switch (format[x])
		{
			case 'x':
				printf("%d", va_arg(folder, int));
				chst = 0;
				break;
			case 'f':
				printf("%f", va_arg(folder,double));
				chst = 0;
				break;
			case 'c':
				printf("%c", va_arg(folder, int));
				chst = 0;
				break;
			case 's':
				str = va_arg(folder, char *);
				if (str == NULL)
					str = "(nill";
				printf("%s", str);
				break;
			default:
				chst = 1;
				break;
		}
		if (format[x + 1] != '\0' && chst == 0)
			printf(",");
		x++;
	}
	printf("\n");
	va_end(folder);
}
