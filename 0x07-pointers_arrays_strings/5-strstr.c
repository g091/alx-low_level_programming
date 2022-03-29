#include "main.h"

/**
 * _strstr - finds the 1st occurrence of the substring
 * @haystack: string
 * @needle: substring.
 * Return: pointer to the beginning of located substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *bhaystack;
	char *p;

	while (*haystack != '\0')
	{
		bhaystack = haystack;
		p = needle;

		while (*haystack != '\0' && *p != '\0' && *haystack == *p)
		{
			haystack++;
			p++;
		}
		if (!*p)
			return (bhaystack);
		haystack = bhaystack + 1;
	}
	return (0);
}
