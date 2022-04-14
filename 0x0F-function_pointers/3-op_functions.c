#include "3-calc.h"

/**
 * op_add - addition
 * @a: 1st no.
 * @b: 2nd no.
 * Return: addition of a & b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subraction
 * @a: 1st no.
 * @b: 2nd no.
 * Return: subtraction of a & b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * @a: 1st no.
 * @b: 2nd no.
 * Return: multiplication of a & b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: 1st no.
 * @b: 2nd no.
 * Return: division of a & b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		return (a / b);
	}
}

/**
 * op_mod - modulus
 * @a: 1st no.
 * @b: 2nd no.
 * Return: Modulus of a/b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		return (a % b);
	}
}
