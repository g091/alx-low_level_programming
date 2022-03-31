#include "main.h"
/**
 * _pow_recursion - returns value of integer a raised to power of b
 * @a: integer
 * @b: power
 * Return: the power of integer or -1 if integer is less than 1
 */

int _pow_recursion(int a, int b)
{
	if (b == 0)
		return (1);
	if (b < 0)
		return (-1);
	return (a * _pow_recursion(a, b - 1));
}
