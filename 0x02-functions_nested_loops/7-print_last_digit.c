#include "main.h"

/**
 * print_last_digit - last digit of no.
 * @a: int
 * Return: last digit
 */

int print_last_digit(int a)
{
	int b;

	b = a % 10;
	if (b < 0)
	{
		b *= -1;
	}
	_putchar(b + '0');
	return (b);
}

