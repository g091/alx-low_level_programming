#include "main.h"

/**
 * check_prime - determines if a no. is a prime no.
 * @n: integer
 * @a: integer test
 * Return: 0 if no. is not a prime no. & 1 if it is
 */

int check_prime(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0)
		return (0);
	return (check_prime(n, a - 1));
}

/**
 * is_prime_number - returns 0 if a no. is'nt a prime no. & 1 if it is
 * @n: integer
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, n - 1));
}
