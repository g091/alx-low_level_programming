#include "main.h"

/**
 * swap_int - to swap the values of two integers
 * @a: integer to swap
 * @b: integers to swap
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int sw;

	sw = *a;
	*a = *b;
	*b = sw;
}
