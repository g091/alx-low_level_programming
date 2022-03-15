#include "main.h"

/**
 * _islower - checking for lowercase char
 * @small: char
 * Return: 1 when lower, 0 when upper
 */

int _islower(int small)
{
	if (small >= 'a' && small <= 'z')
		return (1);
	else
		return (0);
}
