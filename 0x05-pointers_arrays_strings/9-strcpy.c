#include "main.h"

/**
 * _strcpy - copy string pointed to by src, including the terminating null byte
 * @dupl: copied string
 * @src: string to be copied
 * Return: pointer to new copied string
 */
char *_strcpy(char *dupl, char *src)
{
	char *p = dupl;

	while (*src)
		*dupl++ = *src++;
	*dupl = 0;
	return (p);
}
