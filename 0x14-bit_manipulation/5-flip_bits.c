#include "main.h"

/**
 * flip_bits - counts the no. of bits required to flip
 * @n: starting no.
 * @m: no. to flip n to
 * Return: required no. of bits to flip to get from 1 no. to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}
	return (bits);
}
