#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: 1st string
 * @accept: 2nd string
 * Return: pointer to the byte in s that matches.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
