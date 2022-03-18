#include "main.h"
#include <stdio.h>

/**
 * print_diagonal -a diagonal line on the terminal
 * @n: no. indicating size of line
 *
 */

void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0 ; a < n ; a++)
		{
			for (b = 0 ; b < a ; b++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
