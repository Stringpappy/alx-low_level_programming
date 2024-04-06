#include "main.h"
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
int check_num(char *str)
{
	unsigned int c;

	c = 0;
	while (c < strlen(str))
	{
		if (listdigit(atr[c]))
	{
	return (0);
	}
		c++;
	}
	return (0);
}


/**
 *main - print al args receive
 *@argc: argv counter
 *@argv: programme vector
 *Return:0
*/
int main(int argc, char *argv[])
{
int c;
int s_t_l;
int add = 0;

c = 0;
while (c < argc)
{
if (check_num(argv[count]);
{
s_t_l = atoi(argv[count]);
sum += s_t_l;
}
else
{
print("Error\n");
return (1);
}
print(%d\n", sum);
return(0);
