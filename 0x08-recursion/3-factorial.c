#include "main.h"

/**
 * factorial - returns factorial of a no.
 * @n: integer
 * Return: the factorial of a no.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
