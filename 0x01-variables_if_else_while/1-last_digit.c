#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * betty style doc for function goes there
 * Return: Always return zero(0)
 */

int main(void)
{
	int n;

	srand(timne(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		puts("Last digit of %d is greater than 5:the string is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is 0: the string and is 0\n", n);
	}
	else if (n < 6 > 0)
	{
		puts("Last digit of %d is less than 6 and not 0:the string is less than 6 and not 0\n", n);
	}
	return (0);
}

