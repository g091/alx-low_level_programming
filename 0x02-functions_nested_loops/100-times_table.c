#include "main.h"
/**
 * print_times_table - multiplication table
 * @n: int
 * Return:
 */

void print_times_table(int n)
{
	int i, j, prod;

	if (!(n > 15 || n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				prod = (i * j);
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (prod < 10 && j != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((prod % 10) + '0');
				}
				else if (prod >= 10 && prod < 100)
				{
					_putchar(' ');
					_putchar((prod / 10) + '0');
					_putchar((prod % 10) + '0');
				}
				else if (prod >= 100 && j != 0)
				{
					_putchar((prod / 100) + '0');
					_putchar((prod / 10) % 10 + '0');
					_putchar((prod % 10) + '0');
				}
				else
					_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}


