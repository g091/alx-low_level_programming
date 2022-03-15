#include "main.h"
/**
 * print_alphabet - printing a  to z 10 times
 * betty style doc for function goes there
 * Return: Always return zero(0)
 */

void print_alphabet(void)
{
	int i = 0;
	char small;

	while (i < 10)
	{
		for (small = 'a'; small <= 'z'; small++)
		{
			_putchar(small);
		}
		_putchar('\n');
	}
}

