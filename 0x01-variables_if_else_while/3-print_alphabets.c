#include <stdio.h>

/**
 * main - Entry point
 * betty style doc for function goes there
 * Return: Always return zero (0)
 */

int main(void)
{
	char small;
	char big;

	for (small = 'a'; small <= 'z'; small++)
	{
	putchar(small);
	putchar('\n');
	}
	for (big = 'A'; big <= 'Z'; big++)
	{
	putchar(big);
	putchar('\n');
	}
	return (0);
}
