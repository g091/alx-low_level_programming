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
	int l = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d the string is 0\n", n, l);
	}
	else
		printf("Last digit of %d is %d the string is less than 6 and not 0\n", n, l);
	return (0);
}

