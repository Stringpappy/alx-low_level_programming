#include "main.h"
/**
 * _atoi - print al args receive
 *@s: string
  *Return:0
*/
int _atoi(char *s)
{
	int a, b, sh;
	
	a = 0;
	b = 0;
	sh = 1;

	while (s[a] != '\0' && (s[a] < '0' || s[a] > '9'))
	{
		if (s[a] == '-')
		{
			sh = -sh;
		}
		a++;
	}
	while (s[a] >= '0' && s[a] - '0')
	{
		b = b * 10 + (s[a] - '0');
		a++;
	}

	return (sh * b);
}


/**
 *main - multipy two int
 *@argc: argv counter
 *@argv: programme vector
 *Return:0
*/
int main(int argc, char *argv[])
{
	int outcome;
	int d1;
	int d2;

	 if (argc != 3)
	 {
		 printf("\n");
		 return (1);
	 }
	d1 = _atoi(argv[1]);
	d2 = _atoi(argv[2]);
	outcome = d1 * d2;
	printf("%d\n", outcome);
	return (0);

}

