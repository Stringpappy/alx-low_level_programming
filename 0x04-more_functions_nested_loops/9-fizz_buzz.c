#include "main.h"
#include <stdio.h>
/**
 * main - func that run c prog
 * Return:0
 */
int main (void)
{
	int number, num;

	number =  100;
	for (num = 1; num <= number; num++)
	{
		if (num % 3 == 0 &&  num % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if ( num % 3 == 0)
		{
			printf("Fizz");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", num);
		}
		if (num < number)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
