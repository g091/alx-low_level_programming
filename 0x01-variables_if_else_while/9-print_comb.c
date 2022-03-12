#include <stdio.h>

/**
 * main - Entry point
 * betty style doc for function goes there
 * Return: Always return zero (0)
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9' ; n++)
	{
	putchar(n);
	if (n != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
