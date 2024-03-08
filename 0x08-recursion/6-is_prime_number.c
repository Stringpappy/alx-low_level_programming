#include "main.h"
/**
 * is_prime_number - func tht check prime num
 * @n: integer
 * Return:0
 */
int is_prime_number(int n)
{
	int prime;

	if (n <= 1)
	{
		return (0);
	}
	prime = real_prime(n, n - 1);
	return (prime);
}




#include "main.h"

int real_prime(int n, int x)
{
	if (x == 1)
		return (1);
	if (n % x == 0 && x > 0)
		return (0);
	return (real_prime(n, x - 1));
}
