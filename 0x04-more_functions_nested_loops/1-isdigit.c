#include "main.h"
/**
 * _isdigit - checking for digit from 0 to 10
 * @n: int
 * Return: 1 when digit else 0
 */

int _isdigit(int n)
{
	if (n >= '0' &&  n <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
