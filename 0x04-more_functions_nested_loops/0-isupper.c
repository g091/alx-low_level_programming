#include "main.h"

/**
 * _isupper - checking for uppercase char
 * @upp: char
 * Return: 1 when upper, 0 when lower
 */

int _isupper(int upp)
{
	if (upp >= 'A' && upp <= 'Z')
		return (1);
	else
		return (0);
}
