#include <stdio.h>
#include "main.h"
/**
 * print_line - a straight line in the terminal
 * @n: no. indicating line length
 *
 */
void print_line(int n)
{
	int a = 1;

	while (a <= n)
	{
		_putchar(95);
		a++;
	}
	_putchar('\n');
}
