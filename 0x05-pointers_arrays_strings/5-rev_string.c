#include "main.h"
/**
 * rev_string - reversing string.
 * @st: pointer to string.
 *
 * Return: void.
 */
void rev_string(char *st)
{
	int a, b, c, temp;

	a = 0;
	while (st[a] != '\0')
	{
		a++;
	}
	c = 0;
	b = a - 1;

	while (c < b)
	{
		temp = st[c];
		st[c] = st[b];
		st[b] = temp;
		c++;
		b--;
	}
}
