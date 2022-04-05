#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: string
 * Return: pointer to the new string or NULL if string is Null
 */

char *_strdup(char *str)
{
	int a;
	char *ch;
	char *ptr;

	if (str == NULL)
		return (0);
	a = 0;
	while (str[a])
		a++;
	ch = malloc(sizeof(char) * (a + 1));
	ptr = ch;
	if (ptr == 0)
		return (0);
	while (*str)
		*ptr++ = *str++;
	*ptr = '\0';
	return (ch);
}
