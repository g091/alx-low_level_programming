#include "main.h"

/**
 * print_rev - reverse string
 * @st: a string
 */

void print_rev(char *st)
{
	int i = 0;

	while (st[i] != 0)
	{
		i++;
	}
	while (i > 0)
	{
		i--;
		_putchar(st[i]);
	}
	_putchar('\n');
}
