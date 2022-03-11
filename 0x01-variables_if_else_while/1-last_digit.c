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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d the string is 0\n", n);
	}
	else
	{
		printf("Last digit of %d is %d the string is less than 6 and not 0\n", n);
	}
	return (0);
}

