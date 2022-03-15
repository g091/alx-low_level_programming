#include "main.h"

/**
 * _isalpha - checking for uppercase char
 * @upp: char
 * Return: 1 when lower, 0 when upper
 */

int _isalpha(int upp)
{
	if ((upp >= 'A' && upp <= 'Z') || (upp >= 'a' && upp <= 'z'))
		return (1);
	else
		return (0);
}
