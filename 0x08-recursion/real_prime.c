#include "main.h"

int real_prime(int n, int x)
{
	if (x == 1)
		return (1);
	if (n % x == 0 && x > 0)
		return (0);
	return (real_prime(n, x - 1));
}
