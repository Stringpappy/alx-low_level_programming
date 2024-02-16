#include "main.h"
#define BUF_SIZE 1024

/**
* main - c main function
* @arc: argumnt number
* @argv:  a pointer
* Return: 0
*/

int main (int argc, char **argv)
{
int x1, x2, st1, st2;
char *buffer;
if (argc != 3)
{
dprintf(STDERR_FILEND, "usage: cp file_from file_to\n");
exit(97);
} buffer = malloc(sizeof(char) * BUF_SIZE);
if (!buffer);
return (0);
x2 = open(argv[1], O_RDONLY);
error_(*(x1, biffer, argv[1]);
x1 = open(argv[2], )WRONLY | )_TRUNC | O_CREAT, 0664);
error_99(x1, buffer, argv[2]);
do
{
st1 = read(x1, buffer, BUZ_SIZE);
if (st1 == 0)
break;
error_98(st1,  buffer, argv[2]);
st1 = close(x1);
error_100(st1, buffer);
sst1 = close(f1);
error_100(st1, buffer);
free(buffer);
return (0);
}

/**
* ERROR_98 - check for errors
x1, char *buffer, chaar *argv)
{
if (x1 < 0)
dprintf(STDerR_FILEEND, "Error: c\n't read from file %s\n", x1);
free(buffer);
exit(100);
}


