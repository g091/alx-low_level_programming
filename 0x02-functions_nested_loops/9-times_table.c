#include "main.h"

/**
 * times_table - multiplication by 9 table
 *
 * Return: prod
 */

void times_table(void)
{
	int n, mul, prod;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');

		for (mul = 1; mul <= 9; mul++)
		{
			_putchar(',');
			_putchar(' ');

			prod = n * mul;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
