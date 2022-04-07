#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory
 * @b: input
 *
 * Return: pointer to the allocated mem
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(sizeof(b));
	if (ptr == NULL)
		exit(98);
	return (ptr);
	free(ptr);
}
