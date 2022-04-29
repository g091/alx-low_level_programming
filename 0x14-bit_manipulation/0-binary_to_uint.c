#include "main.h"

/**
 * binary_to_uint - converts binary no. to unsigned int.
 * @b: pointer to string
 * Return: converted no. or 0 if err.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n;
	int i;

	n = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		n <<= 1;
		if (b[i] == '1')
			n += 1;
	}
	return (n);
}
