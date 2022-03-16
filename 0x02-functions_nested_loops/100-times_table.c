#include "main.h"

/**
 * print_times_table - multiplication table
 * @n: int
 * Return:
 */

void print_times_table(int n)
{
	int i, j, prod;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			if (n != 0)
				_putchar(',');
			for (j = 1; j <= n; j++)
			{
				prod = i * j;
				if (prod < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + prod);
				}
				else if (prod < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((prod / 10) + '0');
					_putchar((prod % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar((prod / 100) + '0');
					_putchar(((prod % 100) / 10) + '0');
					_putchar(((prod % 100) % 10) + '0');
				}
				if (j < n)
					_putchar(',');
			}
		}
	}
}


