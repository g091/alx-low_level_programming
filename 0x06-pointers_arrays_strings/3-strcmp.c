#include "main.h"

/**
 * int_strcmp - compares 2 strings
 * @s1: 1st char
 * @s2: 2nd char
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
			return(*s1 - *s2);

		s1++;
		s2++;

	}
	return(0);
}
