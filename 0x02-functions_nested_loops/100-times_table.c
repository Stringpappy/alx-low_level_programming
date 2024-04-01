#include "main.h"

/**
 * print_times_table - Prints then  times, starting with 0
 * Return: void
 */
void print_times_table(int n)
{
	
        int x, y, z;

	if (n > 15 || n == 0)
                return;

	for (x = 0; x <= n; x++)
        {
        for (y = 0; y <= n; y++)
        {
        z = x * y;
	if (z == 144)
		printf("144");
	else
		printf("%d,   ", z);
	}
	printf("\n");
	}
}
