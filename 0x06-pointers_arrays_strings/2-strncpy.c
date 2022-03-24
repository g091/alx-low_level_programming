#include "main.h"

/**
 * char *_strncpy - concatenates 2 strings
 * @src: source string
 * @dest: destination string
 * @n: int
 * Return: concatenated string with pointer value
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

