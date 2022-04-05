#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - an array of chars & is initialized with a specific char.
 * @size: size of character
 * @c: character input
 * Return: NULL if size equals 0 else return pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	i = 0;
	if (size <= 0)
		return (0);
	ptr = malloc(sizeof(char) * size);
	if (ptr == 0)
		return (0);
	while (i < size)
	{
		*(ptr + i) = c;
		i++;
	}
	*(ptr + i) = '\0';
	return (ptr);
}
