#include "main.h"

/**
 * print_most_numbers - print from 0 to 9
 * Return: result.
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
		++i;
	}
	_putchar('\n');
}

