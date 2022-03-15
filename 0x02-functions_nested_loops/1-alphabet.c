#include "main.h"
/**
 * main - entry point
 * betty style doc for function goes there
 * Return: Always return zero(0)
 */

void print_alphabet(void)
{
	char small;

	for (small = 'a'; small <= 'z'; small++)
	{
		_putchar(small);
	}
	_putchar('\n');
}

