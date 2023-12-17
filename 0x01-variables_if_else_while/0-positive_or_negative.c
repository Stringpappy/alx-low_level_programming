#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - print when a number is positive or negativ 
 * Return: alwaays return o (success */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is nrgative\n", n);
	}
	return (0);
}
