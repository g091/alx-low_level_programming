#include <stdio.h>

/**
 * wildcmp - compares 2 strings
 * @str1: string 1
 * @str2: string 2
 * Return: 1 if identical & 0 if not
 */

int wildcmp(char *str1, char *str2)
{
	if (*str1 == '\0' && *str2 == '\0')
		return (1);
	if (*str1 == *str2)
		return (wildcmp(str1 + 1, str2 + 1));
	if (*str2 == '*')
	{
		if (*(str2 + 1) == '*')
			return (wildcmp(str1, str2 + 1));
		if (wildcmp(str1 + 1, str2) || wildcmp(str1, str2 + 1))
			return (1);
	}
	return (0);
}
