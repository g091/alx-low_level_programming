#include "main.h"

/**
 * check_square - checks if the no. matches the square
 * @n: integer
 * @a: integer
 * Return: a match
 */

int check_square(int n, int a)
{
	if (a * a == n)
		return (a);
	if (a * a > n)
		return (-1);
	return (check_square(n, a + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a no.
 * @n: integer
 * Return: the natural square root of a no.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n > 0)
		return (check_square(n, 1));
	return (0);
}
