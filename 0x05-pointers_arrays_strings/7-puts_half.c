#include "main.h"

/**
 * _strlen - returning remaining half of a string
 * @st: string
 * Return: length of string (l)
 */
int _strlen(char *st)
{
	int l = 0;

	while (*st)
	{
		st++;
		l++;
	}
	return (l);
}

/**
 * puts_half - returns the remaining half of the string
 * @s: string
 */

void puts_half(char *s)
{
	int l, a, p1;

	l = _strlen(s);
	p1 = (l % 2 == 0) ? l / 2 : (l - 1) / 2 + 1;

	for (a = p1; a < l; a++)
		_putchar(*(s + a));
	_putchar('\n');
}
