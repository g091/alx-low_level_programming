#include "main.h"

/**
 * print_sign - printing the sign of no.
 * @sign: char
 * Return: 1 if > 0, 0 when 0, -1 if < 0
 */

int print_sign(int sign)
{
	if (sign > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (sign == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

