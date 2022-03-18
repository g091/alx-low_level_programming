#include "main.h"

/**
 * print_numbers - 0 to 9
 * @num: int
 * Return:
 */

void print_numbers(void)
{
	int num;

	num = '0';

	while (num <= '9')
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
