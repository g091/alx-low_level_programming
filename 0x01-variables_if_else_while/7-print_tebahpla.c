#include <stdio.h>

/**
 * main - Entry point
 * betty style doc for function goes there
 * Return: Always return zero (0)
 */

int main(void)
{
	char small;

	for (small = 'z'; small >= 'a'; small--)
	putchar(small);
	putchar('\n');
	return (0);
}
