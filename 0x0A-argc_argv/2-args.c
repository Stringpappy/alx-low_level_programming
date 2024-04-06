#include "main.h"
/**
 *main - print al args receive
 *@argc: argv counter
 *@argv: programme vector
 *Return:0
*/
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
