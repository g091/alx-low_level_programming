#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: pointer
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	unsigned int i, cb = 0;

	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			cb = i;
			_putchar('\n');
		}
		_putchar(a[i / 8][i - cb]);
	}
	_putchar('\n');
}
